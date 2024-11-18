#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> num(n + 1);

	num[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];

		if (num[i] + num[i - 1] >= num[i])
		{
			num[i] += num[i - 1];
		}
	}

	int answer = *max_element(num.begin() + 1, num.end());

	cout << answer << "\n";

	return 0;
}
