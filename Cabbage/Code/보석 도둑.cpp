#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, k;
vector<pair<int, int>> gem;
vector<int> bag;
long long answer = 0;
priority_queue<int> q;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		gem.push_back({ a, b });
	}

	for (int i = 0; i < k; i++)
	{
		int c;
		cin >> c;
		bag.push_back(c);
	}

	sort(gem.begin(), gem.end());
	sort(bag.begin(), bag.end());

	int index = 0;
	for (int i = 0; i < k; i++)
	{
		while (index < n && gem[index].first <= bag[i])
		{
			q.push(gem[index++].second);
		}
		if (!q.empty())
		{
			answer += (long long)q.top();
			q.pop();
		}
	}

	cout << answer << "\n";
	return 0;
}
