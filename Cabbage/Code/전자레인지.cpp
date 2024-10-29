#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a = 0;
	int b = 0;
	int c = 0;

	int t;
	cin >> t;

	if (t % 10 != 0)
	{
		cout << "-1" << "\n";
		return 0;
	}

	a = t / 300;
	t %= 300;

	b = t / 60;
	t %= 60;

	c = t / 10;

	cout << a << " " << b << " " << c << " " << "\n";
}
