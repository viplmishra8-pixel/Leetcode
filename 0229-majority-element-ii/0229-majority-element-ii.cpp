class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int  ,int >map ;
        for(auto it :  nums){
            map[it]++;
        }
        vector<int>res ; 
        int n = nums.size();
        for(auto i : map){
            if(i.second > n/3){
                res.push_back(i.first);
            }
        }
        return res ;
    }
};