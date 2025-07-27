// 12)Recursive function to check if a number is prime?
// code:

#include <bits/stdc++.h>
using namespace std;

bool Is_Prime(int n, int i = 2)
{
    if (n <= 1)
        return false;
    if (i * i > n)
        return true;
    if (n % i == 0)
        return false;
    return Is_Prime(n, i + 1);
}

int main()
{
    int n;
    cin >> n;

    if (Is_Prime(n))
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}