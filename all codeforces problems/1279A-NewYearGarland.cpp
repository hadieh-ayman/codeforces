//1279A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> rbg(3);
        cin >> rbg[0];
        cin >> rbg[1];
        cin >> rbg[2];

        sort(rbg.begin(), rbg.end());

        if (rbg[2] > rbg[0] + rbg[1] + 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}