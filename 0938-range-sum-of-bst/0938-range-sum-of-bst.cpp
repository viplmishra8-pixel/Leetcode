class Solution {
public:
    void inorder(TreeNode* root , vector<int>& nums ){
        if( root == nullptr){
            return  ;
        }
        inorder(root->left , nums);
        nums.push_back(root->val);
        inorder(root->right , nums);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> nums ;
        inorder(root ,nums);
        int n = nums.size();
        int sum = 0 ; 
        for(int i : nums){
            if( i>= low && i <= high ){
                sum +=i ;
            }
        }
        return sum ;
    }
};