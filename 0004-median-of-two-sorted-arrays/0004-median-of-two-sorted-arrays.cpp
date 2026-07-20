class Solution {
public:
    vector<int> merge (vector<int>& a , vector<int> &b){
        int i = 0 , j = 0 ; 
        vector<int> ans ; 
        while(i<a.size() && j<b.size()){
            if(a[i]<=b[j]){
                ans.push_back(a[i]);
                i++ ;
            }else{
                ans.push_back(b[j]);
                j++ ;
            }
        }
        while(i<a.size()){
            ans.push_back(a[i]);
            i++ ;
        }
        while(j<b.size()){
            ans.push_back(b[j]);
            j++ ;
        }
        return ans ;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans = merge(nums1 ,nums2);
        int n = ans.size();
        int mid = n/2;
        if(n%2==0){
            double median = ((ans[mid]+ans[mid-1])/2.0);
            return median ;
        }else{
            double median = (double)(ans[mid]);
            return median;
        }
        return double(0);
    }
};