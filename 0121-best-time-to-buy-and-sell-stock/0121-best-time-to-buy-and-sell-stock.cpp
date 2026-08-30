class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxprofit = 0 ; 
        int minprofit = nums[0];
        for (int i =1 ; i < nums.size() ; i++){
            minprofit = min(minprofit , nums[i]);
            int profit = nums[i]- minprofit ;
            maxprofit = max(maxprofit , profit);
        }
        return maxprofit ;
    }
};