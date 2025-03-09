class Solution {
public:
    bool canJump(vector<int>& nums) {
        int require = 0;
        for (int i = nums.size()-1; i >= 0; i--) {
            if (nums[i] >= require) require = 1;
            else require += 1;
        }
        if (require == 1) return true;
        else return false;
    }

};
