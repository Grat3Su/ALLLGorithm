#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<pair <pair<int, int>, pair<int, string>>> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;
	}

	sort(v.begin(), v.end());

	cout << v[n - 1].second.second << "\n" << v[0].second.second << "\n";

	return 0;
}
