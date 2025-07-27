//  7) Recursive function to find the sum of the digits of a number

// code:

#include <bits/stdc++.h>
using namespace std;

int sum_Of_digits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sum_Of_digits(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << "Sum of digits = " << sum_Of_digits(n) << endl;
    return 0;
}
