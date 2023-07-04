#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertatend(Node* &tail , int data)
{
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void insertatpos(Node* &head , Node* &tail , int data , int pos)
{
    if(pos == 1)
    {
        Node* temp = new Node(data);
        temp -> next = head;
        head = temp;
    }

    int i = 1;
    Node* temp = head;
    while(i != pos-1)
    {
        temp = temp -> next;
        i++;
    }

    if(temp -> next == NULL)
    {
        insertatend(tail , data);
        return ;     
    }

    Node* cur = new Node(data);
    cur -> next = temp -> next;
    temp -> next = cur;
}

void removeelement(Node* &head , int data)
{
    while(head != NULL && head -> data == data)
    {
        head = head -> next;
    }
        
    Node* temp = head;
    while(temp != NULL and temp -> next != NULL)
    {
    if(temp-> next-> data == data)
        temp -> next = temp -> next -> next;
    else
        temp = temp -> next;
    }
}

void printdata(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    // insertatpos(head , tail , 1 , 1);
    insertatpos(head , tail , 2 , 2);
    insertatpos(head , tail , 6 , 3);
    insertatpos(head , tail , 3 , 4);
    insertatpos(head , tail , 4 , 5);
    insertatpos(head , tail , 5 , 6);
    insertatpos(head , tail , 6 , 7);

    removeelement(head, 6);
    printdata(head);
    return 0;
}