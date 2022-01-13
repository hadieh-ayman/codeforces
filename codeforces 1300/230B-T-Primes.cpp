//230B
#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n == 2 || n == 3)
        return true;
    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        long long x;
        cin >> x;
        long long i = sqrt(x);
        if (i * i == x)
        {
            if (isPrime(i))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}