// 8) Recursive function to check whether a string is a palindrome

// code:

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int left, int right)
{
    if (left >= right)
        return true;
    if (s[left] != s[right])
        return false;
    return isPalindrome(s, left + 1, right - 1);
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s, 0, s.length() - 1))
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}
