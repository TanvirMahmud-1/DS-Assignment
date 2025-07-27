// 2) Write a recursive function to print numbers from N to 1.??

// Code:

#include <bits/stdc++.h>
using namespace std;
void printN_to_1(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printN_to_1(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printN_to_1(n);
    return 0;
}