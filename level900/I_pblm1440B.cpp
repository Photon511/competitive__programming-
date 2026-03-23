#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long n, k;
		cin >> n >> k; 
		vector<long long> arr(n * k); 
		for (int i = 0; i < n * k; i++) 
			cin >> arr[i];

		long long index = n * k; 

		long long sum = 0; 
		while (k--) 
		{
			index = index- (n / 2 + 1); 
			sum += arr[index]; 
		}
		cout << sum << endl; 
	}
	return 0;
}



