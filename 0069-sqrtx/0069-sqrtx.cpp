class Solution {
public:
    int mySqrt(int n) {
        if (n <= 1)
            return n;
        int left = 0;
        int right = n / 2;
        int ans = 0;
        while (left <= right) {
            long long mid = (left + right) / 2;
            if (mid * mid == n)
                return mid;
            if (mid * mid < n) {
                ans = mid;
                left = mid + 1 ;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }
};