//1029B
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin >> n >> a;
    int prev = a;
    int count = 1, mx = 1;

    for (int i = 1; i < n; i++)
    {
        cin >> a;
        if (a <= prev *2)
        {
            count++;
            mx = max(mx, count);
        }
        else
            count = 1;
        prev = a;
    }

    cout << mx;
    
    return 0;
}