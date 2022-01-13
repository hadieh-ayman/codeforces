//160A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100];
    int num = 0;
    double sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    for (int i = 0; i < n; i++)
    {
        num += a[i];
        if (num > sum/2)
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}