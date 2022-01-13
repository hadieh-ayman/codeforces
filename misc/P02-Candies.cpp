//P02
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* a = new int[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int start, end;
    cin >> start >> end;
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += a[i];
    }

    cout << sum;
    
    return 0;
}