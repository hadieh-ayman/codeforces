//271A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin >> y;

    while (true)
    {
        y++;
        int first = y/1000;
        int second = y/100 % 10;
        int third = y/10 % 10;
        int fourth = y % 10;
        if(first != second && first != third && first != fourth && second != third && second != fourth && third != fourth)
            break;
    }

    cout << y;
    
    return 0;
}