//118A
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string t = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'){
             s.erase(s.begin()+i);
             i--;
        }
    }
    for (int i = 0; i < s.length(); i++){
        t += ".";
        t += s[i];
    }
    cout << t;
    
    return 0;
}