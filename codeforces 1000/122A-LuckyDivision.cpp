//122A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool luckyNum;

    for (int i = 0; i < 13; i++)
    {
        if (n % lucky[i] == 0)
        {
            luckyNum = true;
            break;
        }
        else
            luckyNum = false;
    }

    if (luckyNum)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}