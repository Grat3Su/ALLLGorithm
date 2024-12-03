#include<iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	map<string, bool, greater<>> m;

	for (int i = 0; i < n; i++)
	{
		string name, atten;
		cin >> name >> atten;

		if (atten == "enter")
		{
			m.insert({ name, true });
		}
		else
		{
			m.erase(name);
		}
	}

	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << "\n";
	}

	return 0;
}
