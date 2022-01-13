//1060A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '8')
            count++;
    }

    cout << min(count, n / 11);

    return 0;
}