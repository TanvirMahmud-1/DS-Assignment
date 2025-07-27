// 9) Recursive function to reverse a string
// code:
#include <bits/stdc++.h>
using namespace std;

void reverse_String(string &s, int l, int r)
{
    if (l >= r)
        return;
    swap(s[l], s[r]);
    reverse_String(s, (l + 1), (r - 1));
}

int main()
{
    string s;
    cin >> s;

    reverse_String(s, 0, s.length() - 1);
    cout << "Reversed string: " << s << endl;
    return 0;
}
