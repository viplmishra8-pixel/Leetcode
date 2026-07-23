class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        unordered_map<int, int > map1 ; 
        unordered_map <int , int> map2 ; 
        for(auto it : a ){
            map1[it]++ ;
        }
        for(auto i : b){
            map2[i]++;
        }
        vector<int> res ; 
        for(auto it : map1){
            if(map2.find(it.first)!=map2.end()){
                res.push_back(it.first);
            }
        }
        return res ;
    }
};