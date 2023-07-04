/*
    सर्वमङ्गलमाङ्गल्ये शिवे सर्वार्थसाधिके ।
    शरण्ये त्र्यम्बके गौरि नारायणि नमोऽस्तु ते ॥
*/

#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void begin_ins(Node **head_ref , int new_data)
{b
    Node *new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

void insert_ins(Node *prev_node , int new_data)
{
    if(prev_node == NULL) 
        return;
    Node *new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = prev_node -> next;
    prev_node -> next = new_node;
}

void append_ins(Node **head_ref , int new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node -> data = new_data;
    new_node -> next = NULL;
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while(last -> next != NULL)
        last = last -> next;
    return;
}

void printlis(Node *n)
{
    while(n != NULL)
    {
        cout << n -> data << " ";
        n = n -> next;
    }
}

int main()
{
    Node *head = NULL;

    append_ins(&head , 8);
    
    begin_ins(&head , 12);

    begin_ins(&head , 23);

    append_ins(&head , 1);

    insert_ins(head -> next , 21);

    printlis(head);

    return 0;
}