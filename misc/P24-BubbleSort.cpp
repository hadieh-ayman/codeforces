//P24
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        arr[i] = in;
    }
    
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
        }
        for (auto v : arr)
        {
            cout << v << " ";
        }
        cout << endl;
    }
    
    return 0;
}