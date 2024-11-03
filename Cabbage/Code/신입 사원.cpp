#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int t, n;
vector<pair<int, int>> grade;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> t;

	while (t--)
	{
		cin >> n;
		grade.clear();
		for (int i = 0; i < n; i++)
		{
			int a, b;
			cin >> a >> b;
			grade.push_back(make_pair(a, b));
		}

		sort(grade.begin(), grade.end());

		int second_grade = grade[0].second;
		int cnt = 1;
		for (int i = 1; i < n; i++)
		{
			if (second_grade > grade[i].second)
			{
				cnt++;
				second_grade = grade[i].second;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
