class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {

        vector<double> nums;

        if(root == NULL)
            return {};

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            double sum = 0;
            int size = q.size();

            for(int i = 0; i < size; i++) {

                TreeNode* curr = q.front();
                q.pop();

                sum += curr->val;

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }

            double avg = sum / size;
            nums.push_back(avg);
        }

        return nums;
    }
};