#include <bits/stdc++.h>
using namespace std;

struct treenode {
    int val;
    treenode* left;
    treenode* right;
    treenode(int x) : val(x), left(nullptr), right(nullptr){}
};

vector<int> postorder(treenode* root) {
    stack<treenode*> st1;
    stack<treenode*> st2;
    vector<int> ans;
    st1.push(root);
    while(!st1.empty()) {
        treenode* cur = st1.top();
        st1.pop();
        st2.push(cur);
        if(cur->left) st1.push(cur->left);
        if(cur->right) st1.push(cur->right);
    }

    while(!st2.empty()) {
        ans.push_back(st2.top()->val);
        st2.pop();
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

    vector<int> ans = postorder(root);
    for(auto x : ans) {
        cout << x << " ";
    }

    return 0;
}

//     1
//   2   3
//  4 5 6 7

// postorder: 4 5 2 6 7 3 1