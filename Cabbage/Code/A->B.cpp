#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;

	int answer = 1;
	while (true)
	{
		if (a == b)	break;
		else if (a > b)
		{
			answer = -1;
			break;
		}

		if (b % 2 == 0)
			b /= 2;
		else if (b % 10 == 1)
			b = (b - 1) / 10;
		else
		{
			answer = -1;
			break;
		}
		answer++;
	}

	cout << answer;
	return 0;
}
