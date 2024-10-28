#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int num;
	vector<int> a;
	vector<int> b;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		a.push_back(num);
	}

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		b.push_back(num);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<>());

	int answer = 0;

	for (int i = 0; i <= n; i++)
	{
		answer += a[i] * b[i];
	}

	cout << answer;

	return 0;
}
