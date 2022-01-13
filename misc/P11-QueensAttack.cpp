//P11
#include<bits/stdc++.h>
using namespace std;

int main(){
    //const int MAXN = 100001;
    int n, q, x, y;
    cin >> n >> q;
    vector<bool> row(n), col(n), diag(2*n), rdiag(2*n);
    vector<string> a(q);
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        if (row[x] || col[y] || diag[x+y] || rdiag[n+1-x+y])
        {
            a[i] = "NO";
        }
        else
        {
            a[i] = "YES";
            row[x] = col[y] = diag[x+y] = rdiag[n+1-x+y] = true;
        } 
    }

    for (int i = 0; i < q; i++)
    {
        cout << a[i] << endl;
    }
    
    
    return 0;
}