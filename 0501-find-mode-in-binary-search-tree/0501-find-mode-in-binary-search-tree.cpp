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
    void dfs(vector<int> &nums , TreeNode* root){
        if(root==nullptr){
            return ;
        }
        dfs(nums,root->left);
        nums.push_back(root->val);
        dfs(nums ,root->right);
    }
    vector<int> findMode(TreeNode* root) {
        if(root == NULL){return {};}
        vector<int> nums ;
        vector<int> ans ; 
        dfs(nums , root);
        unordered_map<int,int> map ; 
        for(auto it : nums){
            map[it]++;
        }
        int maxi = INT_MIN ; 
        for(auto i : map ){
            maxi = max( maxi , i.second );
        }
        for (auto it : map) {
            if (it.second == maxi) {
                ans.push_back(it.first);
            }
        }
        return ans ;
    }
};