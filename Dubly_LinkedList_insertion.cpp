// 19) Implement a doubly linked list with insert at beginning, end, and display operations?
// code:

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node *next;
    node *prev;

    node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_begin(node *&head, node *&tail, int value)
{
    node *newnode = new node(value);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_end(node *&head, node *&tail, int value)
{
    node *newnode = new node(value);
    if (tail == NULL)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insert_at_begin(head, tail, 10);
    insert_at_begin(head, tail, 5);
    insert_at_end(head, tail, 20);
    insert_at_end(head, tail, 25);

    display(head);

    return 0;
}
