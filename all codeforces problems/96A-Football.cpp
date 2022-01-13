//96A
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count = 1;
    int max = 0;
    int countzero,countone;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == s[i+1]){
            count++;
        }
        else{
            if (count > max)
                max = count;
            count = 1;
        }
    }
    if(max >= 7){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
    return 0;
}