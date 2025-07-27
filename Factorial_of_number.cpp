//  4) Factorial of a number (recursive)

// code:

#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << "Factorial = " << factorial(n) << endl;
    return 0;
}
