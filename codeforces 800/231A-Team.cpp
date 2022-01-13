//231A
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int row[3];
	int total = 0;
	cin >> n;

	while(n--){
		int sum = 0;
		for (int i = 0; i < 3; ++i)
		{
			cin >> row[i];
			sum+=row[i];
		}
		if (sum > 1)
		{
			total++;
		}
	}

	cout << total << endl;

	return 0;
}