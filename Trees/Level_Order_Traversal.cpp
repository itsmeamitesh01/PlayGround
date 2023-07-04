class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if(root == NULL)
            return {};
        vector<vector<int>> vi;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int s = q.size();
            vector<int> pr;
            for(int i = 0; i < s; i++)
            {
                TreeNode* cur = q.front();
                q.pop();
                pr.push_back(cur->val);
                if(cur->left != NULL)
                    q.push(cur->left);
                if(cur->right != NULL)
                    q.push(cur->right);
            }
            vi.push_back(pr);
        }
        return vi;
    }
};