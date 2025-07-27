// 14) Recursive function to find the maximum element in an array?
// code:

#include <bits/stdc++.h>
using namespace std;

int Max_In_Array(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    return max(arr[n - 1], Max_In_Array(arr, n - 1));
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum Element: " << Max_In_Array(arr, n) << endl;
    return 0;
}