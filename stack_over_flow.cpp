// 21) Write a C program to demonstrate stack overflow and underflow conditions?
// code:

#include <bits/stdc++.h>
using namespace std;
#define MAX 3

int stackArr[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stackArr[++top] = value;
    printf("Pushed: %d\n", value);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped: %d\n", stackArr[top]);
    top--;
}

int main()
{
    for (int i = 1; i <= MAX + 2; i++)
        push(i * 10);
    for (int i = 1; i <= MAX + 2; i++)
        pop();

    return 0;
}
