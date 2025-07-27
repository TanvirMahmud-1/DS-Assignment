// 10) Recursive function to count the number of digits in an integer
// code:

#include <bits/stdc++.h>
using namespace std;

int Count_Digits(int n)
{
    if (n == 0)
        return 0;
    return 1 + Count_Digits(n / 10);
}

int main()
{
    int n;
    cin >> n;

    if (n == 0)
        cout << "Digits = 1" << endl;
    else
        cout << "Digits = " << Count_Digits(n) << endl;

     return 0;
}