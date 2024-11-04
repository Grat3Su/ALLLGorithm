#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> rope(n);
	for (int i = 0; i < n; i++)
	{
		cin >> rope[i];
	}

	sort(rope.begin(), rope.end(), greater<int>());

	int max = rope[n - 1];
	int current;
	for (int i = 0; i < n; i++)
	{
		current = rope[i] * (i + 1);
		if (max < current)
		{
			max = current;
		}
	}

	cout << max;

	return 0;
}
