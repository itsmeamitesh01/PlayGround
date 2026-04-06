#include <iostream>
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

void Insertathead(Node* &head, int data)
{
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void Insertatend(Node* &tail , int data)
{
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void Insertatpos(Node* &head, Node* &tail, int data , int pos)
{
    if(pos == 1)
    {
        Insertathead(head , data);
        return;
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
        Insertatend(tail , data);
        return;
    }

    Node* cur = new Node(data);
    cur -> next = temp -> next;
    temp -> next = cur;    
}

void deletefromhead(Node* &head)
{
    Node* temp = head;
    head = head -> next;
    temp -> next = NULL;
    delete temp;
}

// void deletefromend(Node* &head , Node* &tail)
// {
//     Node* temp = head;
//     while(temp -> next -> next != NULL)
//     {
//         temp = temp -> next;
//     }
//     tail = temp;
//     temp -> next = NULL;
//     delete temp;
// }

void deletefrompos(Node* &head , Node* &tail , int pos) // we need two node 1 pointing on start and other just before start i.e to NULL and both will move together firstly NULL pointing node will come to start and then Start pointing node will move to next. This goes until the required position is not reached .
{
    if(pos == 1)
    {
        deletefromhead(head);
        return;
    }
    else // For both if node is at the end or at any pos except the head.
    {
        int i = 1;
        Node* cur = head;
        Node* prv = NULL;
        while(i < pos)
        {
            prv = cur;
            cur = cur -> next;
            i++;
        }
        if(cur->next == NULL)
        {
            tail = prv;
        }
        prv -> next = cur -> next;
        cur -> next = NULL;
        delete cur;
    }
}

// void deletefrompos(Node* &head, int pos)
// {
//     if(pos == 1)
//     {
//         Node* temp = head;
//         head = head->next;
//         //memory free
//         temp -> next = NULL;
//         delete temp;
//         //We have to write a destructor to free memory
//     }
//     else
//     {
//         Node* cur = head;
//         Node* prv = NULL;
//         int cnt = 1;
//         while(cnt <= pos)
//         {
//             prv = cur;
//             cur = cur -> next;
//             cnt++; 
//         }
//          prv -> next = cur -> next;
//          cur -> next = NULL;
//          delete cur;
//     }
// }

void MiddleElement(Node* &head)
{
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    Node* t = slow;
    cout << "MIDDLE: "<< endl;
    while(t != NULL)
    {
        cout << t -> data << " ";
        t = t -> next;
    }
    cout << endl;
}

void removeelement(Node* &head , int data)
{
    while(head != NULL && head -> data == data)
    {
        head = head -> next;
    }
        
    Node* temp = head;
    while(temp != NULL && temp -> next != NULL)
    {
    if(temp-> next-> data == data)
        temp -> next = temp -> next -> next;
    else
        temp = temp -> next;
    }
}

void print(Node* &head)
{
    if(head == NULL && cout << endl)
        return;
    cout << head->data << " ";
    print(head -> next);
}

int main()
{
    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    Insertatpos(head , tail , 2 , 2);

    Insertatpos(head , tail , 6 , 3);
    
    Insertatpos(head , tail , 3 , 4);
    
    Insertatpos(head , tail , 4 , 5);
    
    Insertatpos(head , tail , 5 , 6);

    Insertatpos(head , tail , 6 , 7);

    // Insertatpos(head , tail , 90 , 8);

    //MiddleElement(head);
    print(head);
    
    removeelement(head , 6);
    print(head);
    
    // cout << "Head :" << head->data << endl;
    // cout << "Tail :" << tail->data << endl;

    // cout << "AFTER DELETION : " << endl;
    
    // deletefromhead(head);
    // deletefromend(head, tail);
   
    // deletefrompos(head , tail , 6);
    // deletefrompos(head , 1);
    // print(head);
    // cout << "Head :" << head->data << endl;
    // cout << "Tail :" << tail->data << endl;
   
    return 0;
}