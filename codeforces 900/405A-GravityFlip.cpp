//405A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int i = 0;
    while (i < n)
    {
        cin >> a[i];
        i++;
    }

    sort(a.begin(),a.end());

    for (auto x : a)
        cout << x << " ";

    return 0;
}