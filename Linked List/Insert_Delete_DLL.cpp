#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL; 
    }

    //Destructor
    ~Node()
    {
        int val = this->data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data: " << val << endl;
    }
};

void Insertathead(Node* &head , Node* &tail , int data)
{
    if(head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp;
        // temp -> prev = NULL;
        head = temp;
    }
}

void Insertatend(Node* &head , Node* &tail , int data)
{
    if(tail == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    { 
        Node* temp = new Node(data);
        tail -> next = temp;
        temp -> prev = tail;
        // temp -> next = NULL;
        tail = temp;
    }
}

void Insertatpos(Node* & head , Node* &tail , int data , int pos)
{
    if(pos == 1)
    {
        Insertathead(head , tail , data);
        return;
    }
    int i = 1;
    Node* temp = head;
    while(i < pos - 1)
    {
        temp = temp -> next;
        i++;
    }
 
    if(temp -> next == NULL)
    {
        Insertatend(head , tail , data);
        return;
    }

    Node* cur = new Node(data);
    cur -> next = temp -> next;
    temp -> next -> prev = cur;
    temp -> next = cur;
    cur -> prev = temp;
}

// void deletefromhead(Node* &head)
// {
//      Node* temp = head;
//      temp -> next -> prev = NULL;
//      head = temp -> next;
//      temp -> next = NULL;
//     //  delete temp;
// }

// void deletefromend(Node* &tail)
// {
//     Node* temp = tail;
//     temp = temp -> prev;
//     temp -> next = NULL;
//     tail -> prev = NULL;
//     tail = temp;
// }

void deletefrompos(Node* &head , Node* &tail , int pos)
{
    if(pos == 1)
    {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;

        delete temp;
    }
    else
    {
        Node* cur = head;
        Node* pre = NULL;
        int cnt = 1;
        while(cnt < pos)
        {
            pre = cur;
            cur = cur -> next;
            cnt++;
        }
        if(cur -> next == NULL)
        {
            cur -> prev = NULL;
            pre -> next = cur -> next;
            tail = pre;
        }

        cur -> prev = NULL;
        pre -> next = cur -> next;
        cur -> next = NULL;

        delete cur;
    }
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getlength(Node* &head)
{
    int len = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

int main()
{
    // Node* node1 = new Node(10);
    
    Node* head = NULL;
    Node* tail = NULL;

    Insertathead(head , tail , 11);
    // print(head);
    // cout << "HEAD : " << head -> data << endl;
    // cout << "TAIL : " << tail -> data << endl;
    
    Insertathead(head , tail , 13);
    // print(head);
    // cout << "HEAD : " << head -> data << endl;
    // cout << "TAIL : " << tail -> data << endl;
    
    Insertathead(head , tail , 8);
    // print(head);
    // cout << "HEAD : " << head -> data << endl;
    // cout << "TAIL : " << tail -> data << endl;

    Insertatend(head , tail ,25);
    // print(head);
    // cout << "HEAD : " << head -> data << endl;
    // cout << "TAIL : " << tail -> data << endl;
    
    Insertatpos(head , tail , 100 , 2);
    // print(head);
    // cout << "HEAD : " << head -> data << endl;
    // cout << "TAIL : " << tail -> data << endl;
    
    Insertatpos(head , tail , 101 , 1);
    print(head);
    cout << "HEAD : " << head -> data << endl;
    cout << "TAIL : " << tail -> data << endl;
    
    cout << endl << "After Deletion: " << endl;
    
    deletefrompos(head, tail , 6);
    print(head);
    cout << "HEAD : " << head -> data << endl;
    cout << "TAIL : " << tail -> data << endl;
    return 0;
}