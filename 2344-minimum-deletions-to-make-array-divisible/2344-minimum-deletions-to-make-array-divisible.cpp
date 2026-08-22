class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        
        vector<int> num = nums;
        sort(num.begin(), num.end());

        int gcd = numsDivide[0];

        for (int i = 1; i < numsDivide.size(); i++) {
            gcd = __gcd(gcd, numsDivide[i]);
        }

        int count = 0;

        for (int i = 0; i < num.size(); i++) {
            int x = num[i];

            if (gcd % x == 0) {
                return count;
            }

            count++;
        }

        return -1;
    }
};