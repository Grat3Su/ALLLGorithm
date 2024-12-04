#include<iostream>
#include <cctype>
#include <map>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	map<string, int> poketmon;
	map<int, string> poketmon2;

	for (int i = 1; i <= n; i++)
	{
		string name;
		cin >> name;
		poketmon.insert(make_pair(name, i));
		poketmon2.insert(make_pair(i, name));
	}

	string input_name;
	for (int i = 0; i < m; i++)
	{
		cin >> input_name;

		if (isdigit(input_name[0]) != 0)
		{
			int num = stoi(input_name);
			auto index = poketmon2.find(num);
			cout << index->second << "\n";
		}
		else
		{
			auto index = poketmon.find(input_name);
			cout << index->second << "\n";
		}
	}

	return 0;
}
