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

void push(Node** head_ref , int new_data)
{
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    *head_ref = new_node;
}

void deletenode(Node** head_ref , int key)
{
    Node* temp = *head_ref;
    Node* prev = NULL;

    if(temp != NULL and temp -> data == key)
    {
        *head_ref = temp -> next;
        delete temp;
        return;
    }

    else
    {
        while(temp != NULL and temp -> data != key)
        {
            prev = temp;
            temp = temp -> next;
        }

        if(temp == NULL)
            return;
        prev -> next = temp -> next;
        delete temp;
    }
}

void printlist(Node* node)
{
    while(node != NULL)
    {
        cout << node -> data << " ";
        node = node -> next;
    }
}

int main()
{
    Node* head = NULL;

    push(&head , 18);
    push(&head , 19);
    push(&head , 23); 
    push(&head , 32);
    push(&head , 10);
    push(&head , 21);
    push(&head , 1);

    puts("Created Linked List: ");
    printlist(head);

    deletenode(&head , 32);
    puts("\nLinked List after Deletion of 32: ");

    printlist(head);

    return 0;
}