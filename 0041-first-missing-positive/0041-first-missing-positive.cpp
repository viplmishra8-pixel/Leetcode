class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int , bool> map ;
        for(auto it : nums){
            map[it]= true ;
        }
        int i = 1; 
        while(map[i]){
            i++;
        }
        return i ;
        
    }
};