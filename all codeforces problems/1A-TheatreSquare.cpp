//1A
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
	long double m, n, a;

	cin >> m >> n >> a;

	long long int num = (ceil(n / a) * ceil(m / a));

	cout << num << endl; 

	return 0;
}