class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto x : nums){
            pq.push(x);
        }
        int res = 0 ;
        for(int i = 0 ; i < k ; i++){
            res  = pq.top();
            pq.pop();
        }
        return res ;
    }
};