//1282A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, r;
        cin >> a >> b >> c >> r;
        int count = 0;
        if (a > b)
            swap(a, b);
        cout << b - a - max(0, min(b, c+r) - max(a, c-r)) << endl;
    }

    return 0;
}