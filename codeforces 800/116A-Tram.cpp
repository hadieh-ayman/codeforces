//116A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    int max = 0;
    int passengers = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        passengers -= a;
        passengers += b;
        if (passengers > max)
        {
            max = passengers;
        }
        
    }
    cout << max;
    return 0;
}