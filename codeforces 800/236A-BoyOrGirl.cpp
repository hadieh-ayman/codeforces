//236A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string t = "";
    cin >> s;

    int index = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int j;
        for (j = 0; j < i; j++)
            if (s[i] == s[j])
                break;

        if (j == i)
            t+= s[i];
    }

    if (t.length() % 2 == 1)
    {
        cout << "IGNORE HIM!\n";
    }
    else
    {
        cout << "CHAT WITH HER!\n";
    }
    return 0;
}