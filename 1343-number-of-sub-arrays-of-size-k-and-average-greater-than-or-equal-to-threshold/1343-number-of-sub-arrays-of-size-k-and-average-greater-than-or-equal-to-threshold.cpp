class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int winSum = 0 ; 
        for(int i = 0 ; i < k ; i++){
            winSum += arr[i];
        }
        int winAVG = winSum/k ;
        int currAVG = winAVG ; 
        int currSum = winSum ; 
        int count = 0 ;
        if(winAVG >= threshold){count++ ;} 
        for(int i = k ; i < arr.size(); i++){
            currSum += arr[i] - arr[i-k];
            currAVG = currSum / k ;
            if(currAVG >= threshold ){count ++ ;}
        }
        return count ;
    }
};