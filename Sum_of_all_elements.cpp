// 13)Recursive function to find the sum of all elements in an integer array?
//  code:
#include <bits/stdc++.h>
using namespace std;

int Sum_Array(int arr[], int n)
{
    if (n == 0)
        return 0;
    return arr[n - 1] + Sum_Array(arr, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = Sum_Array(arr, n);
    cout <<"Sum of Array: " << ans;

    return 0;
}