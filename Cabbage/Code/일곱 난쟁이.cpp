#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int heigh[10];
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> heigh[i];
		sum += heigh[i];
	}

	sort(heigh, heigh + 9);

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - heigh[i] - heigh[j] == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k == i || k == j)
					{
						continue;
					}
					cout << heigh[k] << "\n";
				}
				return 0;
			}
		}
	}

	return 0;
}
