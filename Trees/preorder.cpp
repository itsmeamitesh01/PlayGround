#include <bits/stdc++.h>
using namespace std;

struct treenode {
    int val;
    treenode* left;
    treenode* right;
    treenode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

vector<int> preorder(treenode* root) {
    stack<treenode*> st;
    vector<int> ans;
    st.push(root);
    while(!st.empty()) {
        treenode* cur = st.top();
        st.pop();
        ans.push_back(cur->val);
        if(cur->right) st.push(cur->right);
        if(cur->left) st.push(cur->left);
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

    vector<int> ans = preorder(root);
    for(auto x : ans) {
        cout << x << " ";
    }

    return 0;
}

//     1
//   2   3
//  4 5 6 7

// preorder: 1 2 4 5 3 6 7