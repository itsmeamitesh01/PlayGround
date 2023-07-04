class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) 
    {
        if(root == NULL)
            return {};
        vector<vector<int>> vi;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int s = q.size();
            vector<int> valu;
            for(int i = 0; i < s; i++)
            {
                Node* curr = q.front();
                q.pop();
                valu.push_back(curr -> val);
                for(auto i : curr -> children)
                    q.push(i);
            }
            vi.push_back(valu);
        }
        return vi;
    }
};