//1059A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, L, a;
    cin >> n >> L >> a;

    int num = 0, last = 0;
    while (n--)
    {
        int t, l;
        cin >> t >> l;
        num += (t-last)/a;
        last = t + l;
    }
    int breaks = num + (L - last)/a;
    cout << breaks;

    return 0;
}