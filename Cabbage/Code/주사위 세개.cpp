#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> v(3);
	int answer = 0;
	
	for (int i = 0; i < 3; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	if (v[0] == v[1])
	{
		if (v[1] == v[2])
		{
			answer = 10000 + (v[0] * 1000);
		}
		else
		{
			answer = 1000 + (v[0] * 100);
		}
	}
	else
	{
		if (v[0] == v[2])
		{
			answer = 1000 + (v[0] * 100);
		}
		else if (v[1] == v[2])
		{
			answer = 1000 + (v[1] * 100);
		}
		else
		{
			if (v[0] > v[1])
			{
				if (v[0] > v[2])
				{
					answer = v[0] * 100;
				}
				else if (v[2] > v[0])
				{
					answer = v[2] * 100;
				}
			}
			else if (v[1] > v[2])
			{
				answer = v[1] * 100;
			}
			else if (v[2] > v[1])
			{
				answer = v[2] * 100;
			}
		}
	}

	cout << answer << "\n";

	return 0;
}
