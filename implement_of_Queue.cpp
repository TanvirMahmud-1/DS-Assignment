// 22) Implement a queue using array with enqueue, dequeue, and display?
// code:

#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int myQueue[MAX];
int front = -1, rear = -1;

int Is_Empty()
{

    return (front == -1 || front > rear);
}

int Is_Full()
{
    return rear == MAX - 1;
}
void enqueue(int value)
{
    if (Is_Full())
    {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (Is_Empty())
    {
        front = 0;
    }
    myQueue[++rear] = value;
}

void dequeue()
{
    if (Is_Empty())
    {
        cout << "Queue Underflow" << endl;
        return;
    }
    front++;
}

int peek()
{
    if (Is_Empty())
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return myQueue[front];
}

void display()
{
    if (Is_Empty())
    {
        cout << "Queue is empty" << endl;
        return;
    }
    for (int i = front; i <= rear; i++)

        cout << myQueue[i] << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    display();

    return 0;
}