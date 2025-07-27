// 15) Write a C program to implement a singly linked list with operations: Insert at the
// beginning, insert at a specific position, insert at the end, and display?
// code:

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node *next;
    node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_begin(node *&head, int value)
{
    node *new_node = new node(value);
    new_node->next = head;
    head = new_node;
}

void insert_at_end(node *&head, int value)
{
    node *new_node = new node(value);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insert_at_position(node *&head, int pos, int value)
{
    if (pos == 0)
    {
        insert_at_begin(head, value);
        return;
    }
    node *temp = head;
    for (int i = 0; temp != NULL && i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Position out of range" << endl;
        return;
    }
    node *new_node = new node(value);
    new_node->next = temp->next;
    temp->next = new_node;
}


void print_linked_list(node *head)
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

    insert_at_end(head, 10);
    insert_at_end(head, 20);
    insert_at_begin(head, 5);
    insert_at_position(head, 1, 7); 

    cout << "Linked List: ";
    print_linked_list(head);

    return 0;
}
