#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n;
	cin >> n;

	long long sum = 0, num = 1;
	int cnt = 0;

	while (1)
	{
		sum = sum + num;
		cnt++;
		if (sum > n)
		{
			cnt--;
			break;
		}
		num++;
	}

	cout << cnt;
	return 0;
}
