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

	int start, end;
	vector <pair<int, int>> list;

	for (int i = 0; i < n; i++)
	{
		cin >> start >> end;
		list.push_back(make_pair(end, start));
	}

	sort(list.begin(), list.end());

	int time = list[0].first;
	int count = 1;
	for (int i = 1; i < n; i++)
	{
		if (time <= list[i].second)
		{
			count++;
			time = list[i].first;
		}
	}

	cout << count;
	return 0;
}
