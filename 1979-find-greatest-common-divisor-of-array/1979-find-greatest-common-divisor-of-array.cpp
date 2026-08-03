class Solution {
public:
    int GCD( int a , int b ){
        if(b==0){return a ;}
        else return GCD(b ,a%b);
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return GCD(nums[0] , nums[nums.size()-1]);
    }
};