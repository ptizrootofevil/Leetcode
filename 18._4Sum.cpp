class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int num_size = nums.size() - 1;
        sort(nums.begin(), nums.end());
        if (num_size < 3) return res;
        for (int j = 0; j < num_size - 2; j++) {
            if (j > 0 && nums[j] == nums[j-1]) continue;
            if ((long)nums[j] + nums[j+1] + nums[j+2] + nums[j+3] > target) break;
            for (int i = j+1; i < num_size - 1; i++) {
                if (i > j+1 && nums[i] == nums[i-1]) continue;
                if ((long)nums[j] + nums[i] + nums[i+1] + nums[i+2] > target) break;
                int left = i+1;
                int right = num_size;
                long int i_j = nums[j] + nums[i];
                while (left < right) {
                    if (i_j + nums[left] + nums[left+1] > target) break;
                    if (i_j + nums[right] + nums[right-1] < target) break;
                    if (left > i+1 && nums[left] == nums[left-1]) {
                        left++;
                        continue;
                    } else if (right < num_size && nums[right] == nums[right+1]) {
                        right--;
                        continue;
                    }
                    if ((long)nums[j] + nums[i] + nums[left] + nums[right] > target) right--;
                    else if ((long)nums[j] + nums[i] + nums[left] + nums[right] < target) left++;
                    else {
                    res.push_back({nums[j], nums[i], nums[left], nums[right]});
                    left++;
                    }

                }
            }
        }
        return res;
    }
};
