#include <bits/stdc++.h>
using namespace std;

class Node
{
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
        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data: " << val << endl;
    }
};

void InsertAtPos(Node* &tail , int data , int ele)
{
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;
    }
    else
    {
        Node* cur = tail;
        while(cur -> data != ele)
        {
            cur = cur -> next;
        }
        
    }

}
void print(Node* &head)
{
    Node* temp = head;
    while(temp != temp-> next)
}
int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;


}