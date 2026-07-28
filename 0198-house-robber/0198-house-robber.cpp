class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) {
            return nums[0];
        }

        vector<int> dp(n, 0);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
        }

        return dp[n-1];        
    }
};

/*
     // GIVES MEMORY LIMIT EXCEEDED //
     // also exponential timeComplexity //
 int helperFun(vector<int> nums, int i ){
        if(i<0) { return 0 ;}
        return max(helperFun(nums , i-2)+ nums[i] ,helperFun( nums, i-1 ));
    }
    int rob(vector<int>& nums) {
        return helperFun(nums , nums.size()-1 );
    }
*/