// 17) Write a function to search for an element in a singly linked list?
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

void search(node *head, int key)
{
    node *temp = head;
    int pos = 0;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            cout << "Found at position: " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Not found" << endl;
}

int main()
{
    node *head = NULL;
    head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    int key;
    cin >> key;

    search(head, key);

    return 0;
}
