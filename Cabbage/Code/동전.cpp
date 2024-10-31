#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	int a[10];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int num = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] <= k)
		{
			num += k / a[i];
			k %= a[i];
		}
	}

	cout << num;
	return 0;
}
