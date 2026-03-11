#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x): val(x), next(nullptr){}
};

struct DNode {
    int val;
    DNode* next;
    DNode* prev;
    DNode(int x) : val(x), next(nullptr), prev(nullptr) {}
};

void create_sll(Node* &head, int n) {
    Node* temp = head;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        Node* nn = new Node(x);
        if(head == nullptr) {
            head = nn;
            temp = head;
        }
        else {
            temp->next = nn;
            temp = temp->next;
        }
    }
}

void create_dll(DNode* &head, int n) {
    DNode* tmp = head;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        DNode* nn = new DNode(x);
        if(head == nullptr) {
            head = nn;
            tmp = head;
        }
        else {
            tmp->next = nn;
            nn->prev = tmp;
            tmp = tmp->next;
        }
    }
}

void create_cll(Node* &head, int n) {
    Node* temp = head;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        Node* nn = new Node(x);
        if(head == nullptr) {
            head = nn;
            temp = head;
        }
        else {
            temp->next = nn;
            temp = temp->next;
        }
    }
    temp->next = head;
}

int mid_ele(Node* head) {
    if(head == nullptr) return head->val;
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}

bool cycle_or_not(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast ) return true;
    }
    return false;
}

void rev_sll(Node* &head) {
    Node* prev = nullptr;
    Node* cur = head;
    Node* nxt = nullptr;
    while(cur != nullptr) {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    head = prev;
}


int main() {
    cout << endl << "-------------------SINGLY LINKED LIST-------------------" << endl;
    Node* head = nullptr;
    int n; cin >> n;
    create_sll(head, n);
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }

    cout << endl << "-------------------DOUBLY LINKED LIST-------------------" << endl;
    
    DNode* dhead = nullptr;
    create_dll(dhead, n);
    DNode* tmp = dhead;
    while(tmp != nullptr) {
        cout << tmp->val << " <-> ";
        tmp = tmp->next;
    }

    cout << endl << "-------------------CIRCULAR LINKED LIST-------------------" << endl;
    Node* chead = nullptr;
    create_cll(chead, n);
    Node* tp = chead;
    if(tp != nullptr) {
        do {
            cout << tp->val << " -> ";
            tp = tp->next;
        } while(tp != chead);
    }
    cout << endl << "-------------------MIDDLE ELEMENT-------------------" << endl;
    cout << mid_ele(head) << endl;

    cout << endl << "-------------------CYCLE OR NOT-------------------" << endl;
    cout << (cycle_or_not(head) ? "Cycle Present" : "No Cycle");

    cout << endl << "-------------------REVERSE LINKED LIST-------------------" << endl;
    rev_sll(head);
    temp = head;
    while(temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
}