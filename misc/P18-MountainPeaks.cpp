//example
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h;

    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        h.push_back(in);
    }

    int peaks;
    int days = 0;
    for (peaks = 3; peaks <= n; peaks++) //each size
    {
        if (n % peaks == 0)
        {
            bool challenge = true;
            for (int j = 0; j < n; j += peaks) //each seg
            {
                int count = 0;
                for (int i = 0; i < peaks; i++) //one seg
                {
                    int p = i + j;
                    if (p != 0 && p != n - 1)
                    {
                        if (h[p - 1] < h[p] && h[p + 1] < h[p])
                        {
                            count++;
                            break;
                        }
                    }
                }
                if (count < 1)
                {
                    challenge = false;
                    break;
                }
            }
            if (challenge)
            {
                days = n / peaks;
                break;
            }
        }
    }

    cout << days;
    return 0;
}