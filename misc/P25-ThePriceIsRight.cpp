//P25
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mini = INT_MAX;
    int cheapest;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        mini = min(p, mini);
        if (mini == p)
            cheapest = i;
    }

    cout << cheapest;

    return 0;
}