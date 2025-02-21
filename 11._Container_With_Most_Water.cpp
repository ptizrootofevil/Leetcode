class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int m_val = 0;
        int right = height.size() - 1;

        while (left < right) {
            int val = min(height[left], height[right]) * (right - left);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
            if (val > m_val) m_val = val;
        }
        return m_val;

    }
};
