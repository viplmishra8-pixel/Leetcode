class Solution {
public:
   vector<long long> BFS(TreeNode* root) {
        vector<long long> levelSums;
        if (root == nullptr) {
            return {};
        }
        queue<TreeNode*> q; 
        q.push(root);
        
        while (!q.empty()) {
            int size = q.size();
            long long sum = 0;
            
            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();
                
                sum += curr->val;
                
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            levelSums.push_back(sum);
        }
        return levelSums;
    }
   long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> res = BFS(root);
        int n = res.size();
        
        if (k > n) return -1;
        
        sort(res.rbegin(), res.rend());
        return res[k - 1];
    }
};