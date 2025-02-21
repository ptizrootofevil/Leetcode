class Solution {
public:

    int reverse(int x) {
        long int res = 0;

        while (abs(x) > 0) {
            res *= 10;
            if (res > INT_MAX || res < INT_MIN) return 0;
            res += x % 10;
            x /= 10;
        
        }

        return res;
    }
};
