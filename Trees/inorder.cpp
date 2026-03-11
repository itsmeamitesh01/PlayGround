#include <bits/stdc++.h>
using namespace std;

struct treenode {
    int val;
    treenode* left;
    treenode* right;
    treenode(int x) : val(x), left(nullptr), right(nullptr){}
};

vector<int> inorder(treenode* root) {
    stack<treenode*> st;
    vector<int> ans;
    treenode* cur = root;

    while(cur != nullptr || !st.empty()) {
        if(cur != nullptr) {
            st.push(cur);
            cur = cur->left;
        }
        else {
            treenode* tmp = st.top();
            st.pop();
            ans.push_back(tmp->val);
            cur = tmp->right;
        }
    }
    return ans;
}

int main() {
    treenode* root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);
    root->left->left = new treenode(4);
    root->left->right = new treenode(5);
    root->right->left = new treenode(6);
    root->right->right = new treenode(7);

    vector<int> ans = inorder(root);
    for(auto x : ans) {
        cout << x << " ";
    }
    
    return 0;
}

//     1
//   2   3
//  4 5 6 7

// inorder: 4 2 5 1 6 3 7