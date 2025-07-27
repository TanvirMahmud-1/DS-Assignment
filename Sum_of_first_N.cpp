// 3) Sum of first N natural numbers (recursive)

// code:

#include <iostream>
using namespace std;
int sum_N(int n)
{
    if (n == 0)
        return 0;
    return n + sum_N(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << "Sum = " << sum_N(n) << endl;
    return 0;
}
