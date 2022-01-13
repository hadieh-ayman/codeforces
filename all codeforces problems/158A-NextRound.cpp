//158A
#include<iostream>
using namespace std;

int main()
{
	int n, k;
	int winners = 0;
	cin >> n >> k;
	int scores[10000];

	for (int i = 0; i < n; ++i)
	{
		cin >> scores[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (scores[i]>=scores[k-1] && scores[i]>0)
		{
			winners++;
		}
	}

	cout << winners << endl;

	return 0;
}