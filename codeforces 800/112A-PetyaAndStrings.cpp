//112A
#include<bits/stdc++.h>
using namespace std;

int main(){
    char c1, c2;
    string s1 = "";
    string s2 = "";

    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        c1 = s1[i];
        s1[i] = tolower(c1);
        c2 = s2[i];
        s2[i] = tolower(c2);
    }
    
    if(s1 == s2){
        cout << 0;
    }
    else if(s1 > s2){
        cout << 1;
    }
    else{
        cout << -1;
    }
    
    return 0;
}