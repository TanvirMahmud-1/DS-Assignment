// 5) Compute a^b (a raised to the power b)

// code:

#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "ANS = " << power(a, b) << endl;
    return 0;
}