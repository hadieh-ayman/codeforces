//P26 woorororo
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        a[i] = in;
    }

    for (int i = 0; i < n-1; i++)
    {
        int mini = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j] < a[mini])
                mini = j;
        }
        if(mini != i)
            swap(a[i], a[
                mini]);

        for(auto v : a)
            cout << v << " ";
        cout << endl;
    }
    
    
    return 0;
}