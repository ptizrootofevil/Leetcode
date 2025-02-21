class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int num_size = nums.size() - 1;
        sort(nums.begin(), nums.end());
        int closest = nums[0] + nums[1] + nums[2];
        
        
        for (int i = 0; i < num_size - 1; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int left = i+1;
            int right = num_size;
            
            while (left < right) {

                if (left > i+1 && nums[left] == nums[left-1]) {
                    left++;
                    continue;
                } else if (right < num_size && nums[right] == nums[right+1]) {
                    right--;
                    continue;
                }
                int sum = nums[i] + nums[left] + nums[right];
                if (sum > target) right--;
                else if (sum < target) left++;
                else return target;
                if (abs(sum - target) < abs(closest - target)) closest = sum;
            }
        }
        return closest;
    }
};
