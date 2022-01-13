//example
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* a = new int[1000000];;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int tmp = a[s];
        a[s] = a[e];
        a[e] = tmp;
        s++;
        e--;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}