//451B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        a.push_back(in);
        b.push_back(in);
    }
    
    sort(b.begin(), b.begin() + n);

    if (a == b)
    {
        cout << "yes\n";
        cout << "1 1";
        return 0;
    }

    int l;
    for (l = 0; l < n; l++)
    {
        if (b[l] != a[l])
            break;
    }

    int r;
    for (r = n - 1; r >= 0; r--)
    {
        if (b[r] != a[r])
            break;
    }

    if (l >= r)
    {
        cout << "yes\n";
        cout << l + 1 << " " << r + 1;
        return 0;
    }

    int tmp = l;

    do
    {
        if (a[tmp] < a[tmp + 1])
        {
            cout << "no\n";
            return 0;
        }
        tmp++;
    } while (tmp != r);

    cout << "yes\n";
    cout << l + 1 << " " << r + 1;
    return 0;
}