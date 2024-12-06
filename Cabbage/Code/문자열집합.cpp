#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	int count = 0;
	string str;
	vector<string> v;

	while (n--)
	{
		cin >> str;
		v.push_back(str);
	}

	sort(v.begin(), v.end());

	while (m--)
	{
		cin >> str;
		if (binary_search(v.begin(), v.end(), str))
		{
			count++;
		}
	}

	cout << count;

	return 0;
}
