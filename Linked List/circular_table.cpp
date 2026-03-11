#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next = nullptr;
    Node(int x) {
        val = x;
        next = nullptr;
    }
};

Node* ll_gen(int n) {
    Node* head = nullptr;
    Node* temp = head;
    for(int i = 1; i <= n; i++) {
        Node* nn = new Node(i);
        if(head == nullptr) {
            head = nn;
            temp = head;
        }
        else {
            temp ->next = nn;
            temp = temp->next;
        }
    }
    temp->next = head;
    return head;
}

void min_jump(int n, int x, int y, vector<int> a) {
    Node* cur = new Node(0);;
    cur->next = ll_gen(n);
    Node* fst = cur;
    Node* slw = cur;

    for(int i = 0; i < x; i++) {
        fst = fst->next;
    }

    for(int i = 0; i < y; i++) {
        slw = slw->next;
    }

    

}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    min_jump(n, x, y, a);
    return 0;
}
