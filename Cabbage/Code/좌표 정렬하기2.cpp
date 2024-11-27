#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int> a, const pair<int, int> b)
{
	if (a.first == b.first)
	{
		return a.second < b.second;
	}
	return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i].second >> v[i].first;
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].second << " " << v[i].first << "\n";
	}

	return 0;
}
