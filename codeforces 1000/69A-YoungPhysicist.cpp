//69A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 0;
    int y = 0;
    int z = 0;
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            int tmp;
            cin >> tmp;
            if (j == 1)
            {
                x+=tmp;
            }
            else if (j == 2)
            {
                y+=tmp;

            }
            else
            {
                z+=tmp;
            } 
            
        }
    }

    if(x == 0 && y == 0 && z == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
    return 0;
}