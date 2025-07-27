// 1)Write a recursive function to print numbers from 1 to N.??

// Code:

#include <bits/stdc++.h>
using namespace std;
void print1_to_N(int n)
{
    if (n == 0)
        return;
    print1_to_N(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print1_to_N(n);
    return 0;
}
