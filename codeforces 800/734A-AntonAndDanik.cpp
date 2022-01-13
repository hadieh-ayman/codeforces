//734A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    
    int anton = 0;
    int danik = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            anton++;
        else
            danik++;
    }

    if (anton > danik)
        cout << "Anton";
    else if(anton < danik)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}