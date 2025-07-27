// 18) Write a program to count the number of nodes in a singly linked list?
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

int count_nodes(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    node *head = NULL;
    head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    cout << "Number of nodes: " << count_nodes(head) << endl;

    return 0;
}
