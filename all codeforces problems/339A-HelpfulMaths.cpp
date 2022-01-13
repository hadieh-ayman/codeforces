//339A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int> nums;
    string t;

    cin >> s;
    istringstream sus(s);

    while (getline(sus, t, '+'))
    {
        nums.push_back(stoi(t));
    }

    sort(nums.begin(), nums.end());
    int i = 1;
    for (auto n : nums)
    {
        if (i == nums.size())
        {
            cout << n <<endl;
            break;
        }
        i++;
        cout << n << "+";
    }
    return 0;
}