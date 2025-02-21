class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int prev1 = 1;
        int prev2 = 0;
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] == nums[prev1] && nums[i] == nums[prev2]) {
                nums[i] = INT_MAX;
                n--;
            }
            else {
                int tmp = prev1;
                prev1 = i;
                prev2 = tmp;
            }
        }
        std::sort(nums.begin(), nums.end());
        return n;
    }
};
