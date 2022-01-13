//P21
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
 
    vector<bool> primes(n+1);
    primes[2] = 1;

    for (int i = 3; i <= n; i += 2)
    {
        primes[i] = 1;
    }

    for (long long i = 3; i <= n; i += 2)
    {
        if (primes[i] == 1)
        {
            for (long long j = i * i; j <= n; j += i)
            {
                primes[j] = 0;
            }
        }
    }

    cout << count(primes.begin(), primes.end(),1) << endl;
    for (int i = 0; i <= n; i++)
    {
        if (primes[i])
            cout << i << " ";
    }

    return 0;
}