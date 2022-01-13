//110A
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;

    int num = 0;
    while(n)
    {
        if(n%10 == 4 || n%10 == 7)
        {
            num++;
        }    
        n /= 10;
    }
    if(num == 4 || num == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
    
    return 0;
}