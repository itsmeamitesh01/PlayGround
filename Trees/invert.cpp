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

// treenode* inv(const vector<int>& a) {
//     if(a.empty()) return nullptr;
//     vector<treenode*> node(a.size(), nullptr);

//     for(int i = 0; i < a.size(); i++) {
//         node[i] = new treenode(a[i]);
//     }

//     for(int i = 0; i < a.size(); i++) {
//         int left = 2*i + 1, right = 2*i + 2;
//         if(left < a.size()) node[i]->left = node[left];
//         if(right < a.size()) node[i]->right = node[right];
//     }
//     return node[0];
// }

// vector<vector<int>> bfs(treenode* root) {
//     vector<vector<int>> res;
//     queue<treenode*> q;
//     q.push(root);

//     while(!q.empty()) {
//         int s = q.size();
//         vector<int> level;
//         for(int i = 0; i < s; i++) {
//             treenode* cur = q.front();
//             q.pop();
//             level.push_back(cur->val);
//             if(cur->left) q.push(cur->left);
//             if(cur->right) q.push(cur->right);
//         }
//         res.push_back(level);
//     }
//     return res;
// }

treenode* inv(treenode* root) {
    if(!root) return nullptr;
    treenode* left = inv(root->left);
    treenode* right = inv(root->right);
    root->left = right;
    root->right = left;

    return root;

}


int main() {
    treenode* root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);
    root->left->left = new treenode(4);
    root->left->right = new treenode(5);
    root->right->left = new treenode(6);
    root->right->right = new treenode(7);

    treenode* inverted = inv(root);

    
    return 0;
}

//     1
//    / \ 
//   2   3
//  / \ / \ 
// 4  5 6  7

//     1
//    / \ 
//   3   2
//  / \ / \ 
// 7  6 5  4
