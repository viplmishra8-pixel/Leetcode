class Solution {
public:
    int helperFun(vector<int> nums , int i ){
        if(i<0) { return 0 ;}
        return max(helperFun(nums , i-2)+ nums[i] ,helperFun( nums, i-1 ));
    }
    int rob(vector<int>& nums) {
        return helperFun(nums , nums.size()-1 );
    }
};