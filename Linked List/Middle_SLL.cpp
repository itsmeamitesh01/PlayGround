#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //Destructor
    ~Node()
    {
        int val = this -> data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data: " << val << endl;
    }
};

void Insertatpos(Node* &head, Node* &tail, int data , int pos)
{
    if(pos == 1)
    {
        Node* temp = new Node(data);
        temp -> next = head;
        head = temp;
    }
    
    Node* temp = head;
    int i = 1;
    while(i != pos-1)
    {
        temp = temp -> next;
        i++;
    }

    if(temp -> next == NULL)
    {
        Node* temp = new Node(data);
        tail -> next = temp;
        tail = temp;
    }

    Node* cur = new Node(data);
    cur -> next = temp -> next;
    temp -> next = cur;    
}

void MiddleElement(Node* &head)
{
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL and fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    Node* t = slow;
    cout << "MIDDLE: "<< endl;
    while(t != NULL)
    {
        cout << t -> data << endl;
        t = t -> next;
    }
}
void print(Node* &head)
{
    Node* tra = head;
    while(tra != NULL)
    {
        cout << tra->data << " ";
        tra = tra -> next;
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    Insertatpos(head , tail , 12 , 1);

    Insertatpos(head , tail , 22 , 1);
    
    Insertatpos(head , tail , 32 , 2);
    
    Insertatpos(head , tail , 60 , 1);
    
    Insertatpos(head , tail , 76 , 5);

    Insertatpos(head , tail , 80 , 7);

    Insertatpos(head , tail , 90 , 8);

    MiddleElement(head);

    print(head);
    
    return 0;
}