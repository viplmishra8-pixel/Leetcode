class Solution {
public:
    int digSum(int x ){
        int sum = 0 ;
        while(x>0){
            sum += x%10 ;
            x/=10 ;
        }
        return sum ;
    }
    int smallestIndex(vector<int>& nums) {
        int indx = 0 ;
        for(int i = 0; i < nums.size(); i++){
            if(digSum(nums[i]) == i){
                return i ;
            }
        } 
        return - 1;
    }
};