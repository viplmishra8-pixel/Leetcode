/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> BFS(TreeNode* root){
        vector<int> arr ; 
        if(root==nullptr){
            return {};
        }
        queue<TreeNode*> q ; 
        q.push(root);
        while(!q.empty()){
            int size =q.size();
            int sum = 0 ; 
            for(int i = 0 ; i < size ; i++){
                TreeNode* curr = q.front();
                q.pop();
                sum+=curr->val; 
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            arr.push_back(sum);
        }
        return arr ;
    }
    int maxLevelSum(TreeNode* root) {
    vector<int> nums = BFS(root);
    int maxi = INT_MIN ;
    int indx = 0 ;
   for(int i = 0 ; i < nums.size(); i++){
    if(nums[i] > maxi){
        maxi = nums[i];
        indx = i ;
            }
        }  
        return indx +1;   
    }
};