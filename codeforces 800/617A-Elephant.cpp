//617A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, count = 1;
    cin >> x;

    while (x>5)
    {
        count++;
        x-=5;
    }

    cout << count;
    
    return 0;
}