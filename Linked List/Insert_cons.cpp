/*
    सर्वमङ्गलमाङ्गल्ये शिवे सर्वार्थसाधिके ।
    शरण्ये त्र्यम्बके गौरि नारायणि नमोऽस्तु ते ॥
*/

#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class 
void insertbeg(Node *head , int value)
{
    Node *newnode = new Node(x);
    newnode -> next = head;
    head = newnode;
    return head;
}

void insertmid(Node *prev , int value)
{
    if(prev == NULL)
        return;
    Node *newnode = new Node(x);

}
int main()
{

}