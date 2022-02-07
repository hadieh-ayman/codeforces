//P27
#include<bits/stdc++.h>
using namespace std;

int index(vector<int> s, int n)
{
    for (int i = s.size()-1; i > -1; i--)
    {
        if(s[i] == n)
            return i+1;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    
    vector<int> s(n);
    vector<int> indecies(n);
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        s[i] = in;
        sort(s.rbegin(), s.rend());
        indecies[i] = index(s, in);
    }

    
    for(auto v: indecies)
        cout << v << endl;

    for(auto v: s)
        cout << v << " ";
    
    return 0;
}