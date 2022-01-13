//26A
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int j = 2; j <= (n / 2); j++)
    {
        if (n % j == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> primes;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            primes.push_back(i);
    }

    int prime = 0;
    for (int i = 6; i <= n; i++)
    {
        int count = 0;
        for (int j = 0; j < primes.size(); j++)
        {
            if (i % primes[j] == 0)
                count++;
        }
        if (count == 2)
            prime++;
    }

    cout << prime;
}