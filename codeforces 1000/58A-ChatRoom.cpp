//58A
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string a = "hello";
    int j = 0, pos = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==a[j])
        {
            j++;
            pos++;
            if (pos == 5)
            {
                break;
            }
        }
    }
    if (pos == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
    return 0;
}