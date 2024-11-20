#include<iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	string book;
	cin >> n;

	map<string, int> m;

	for (int i = 0; i < n; i++)
	{
		cin >> book;
		m[book]++;
	}

	int max = 0;
	string maxbook;
	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		if (iter->second > max)
		{
			max = iter->second;
			maxbook = iter->first;
		}
		else if (iter->second == max)
		{
			if (maxbook > iter->first)
			{
				maxbook = iter->first;
			}
		}
	}

	cout << maxbook;
	return 0;
}
