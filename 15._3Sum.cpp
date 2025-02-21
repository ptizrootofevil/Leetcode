class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int num_size = nums.size() - 1;
        if (num_size < 2) return res;
        sort(nums.begin(), nums.end());
        if (nums[0] > 0) return res;
        if (nums[num_size] < 0) return res;
        
        for (int i = 0; i < num_size - 1; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            if (nums[i] > 0) return res;
            int target = nums[i];
            int left = i+1;
            int right = num_size;
            
            while (left < right) {
                if (nums[right] < 0) break;
                if (left > i+1 && nums[left] == nums[left-1]) {
                    left++;
                    continue;
                } else if (right < num_size && nums[right] == nums[right+1]) {
                    right--;
                    continue;
                }
                if (target + nums[left] + nums[right] > 0) right--;
                else if (target + nums[left] + nums[right] < 0) left++;
                else {
                res.push_back({nums[i], nums[left], nums[right]});
                left++;
                }

            }
        }
        return res;
    }
};
