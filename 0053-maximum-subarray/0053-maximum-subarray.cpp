class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int res = nums[0];
        int max_end = nums[0];
        for(int i =  1 ; i < n  ;i++){
            max_end = max( nums[i], max_end + nums[i]);
            res = max(res , max_end);
        }
        return res; 
    }
};
/*
   int n = nums.size();
        int max_sum = nums[0];
        for(int i = 0 ; i < n ; i++){
            int curr_sum = 0 ; 
            for(int j = i ; j < n ;j ++){
                curr_sum+=nums[j];
                max_sum = max(curr_sum , max_sum);
            }
        }
        return max_sum ;
    }
     // this will give TLE for large data set//  
     // so better use kadens algorithm //
     
*/