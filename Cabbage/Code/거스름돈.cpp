#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int money;
	cin >> money;

	int five = money / 5;
	if (money % 5 == 0)
	{
		cout << five;
		return 0;
	}

	while (five >= 0)
	{
		int result = (money - (five * 5)) % 2;
		int two = (money - (five * 5)) / 2;
		if (result == 0)
		{
			cout << five + two;
			return 0;
		}
		five--;
	}
	cout << "-1";
	return 0;
}
