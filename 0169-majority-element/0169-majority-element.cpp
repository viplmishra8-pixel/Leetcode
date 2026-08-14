class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int ,int>  map ; 
       for(auto it : nums){
        map[it]++;
       }
       int n = nums.size();
       for(auto it : map){
        if(it.second > n/2){
            return it.first ; 
            break ; 
        }
       }
       return 0 ;
    }
};