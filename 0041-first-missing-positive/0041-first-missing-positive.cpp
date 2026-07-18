class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                temp.push_back(nums[i]);
            }
        }
        sort(temp.begin(), temp.end());
        if (temp.empty() || temp[0] != 1)
            return 1;
        int a = 1;
        for(auto c : temp ){
            if(c==a){
                a++ ;
            }else if( c > a ){
                return a ;
            }
        }return a ;
    }
};