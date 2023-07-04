/*
    सर्वमङ्गलमाङ्गल्ये शिवे सर्वार्थसाधिके ।
    शरण्ये त्र्यम्बके गौरि नारायणि नमोऽस्तु ते ॥
*/

#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printList(Node* n)
{
    while(n != NULL)
    {
        cout << n -> data <<" ";
        n = n -> next;
    }
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    printList(head);

    return 0;
}