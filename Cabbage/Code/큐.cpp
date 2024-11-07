#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string text;
	int n, t;
	queue<int> save;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> text;

		if (text == "push")
		{
			cin >> t;
			save.push(t);
		}
		else if (text == "pop")
		{
			if (!save.empty())
			{
				cout << save.front() << "\n";
				save.pop();
			}
			else
				cout << "-1" << "\n";
		}
		else if (text == "size")
		{
			cout << save.size() << "\n";
		}
		else if (text == "empty")
		{
			if (save.empty())
			{
				cout << "1" << "\n";
			}
			else
			{
				cout << "0" << "\n";
			}
		}
		else if (text == "front")
		{
			if (!save.empty())
			{
				cout << save.front() << "\n";
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
		else if (text == "back")
		{
			if (!save.empty())
			{
				cout << save.back() << "\n";
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
	}

	return 0;
}
