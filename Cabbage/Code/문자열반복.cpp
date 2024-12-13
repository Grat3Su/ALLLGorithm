#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n;

	string s;

	for (int i = 0; i < n; i++)
	{
		cin >> m >> s;

		for (int j = 0; j < s.size(); j++)
		{
			for (int k = 0; k < m; k++)
			{
				cout << s[j];
			}
		}

		cout << "\n";
	}

	return 0;
}
