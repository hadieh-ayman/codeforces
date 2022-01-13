//P13
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long A;
    cin >>  A;

    long long mini = A*10;

    for (long long w = 1; w <= sqrt(A); w++)
    {
        if (A%w == 0)
        {
            long long l = A/w;
            mini = min(mini, 2*(w+l));
        }
        
    }

    cout << mini;
    
    return 0;
}