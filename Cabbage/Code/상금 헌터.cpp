#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	int one[6] = { 500, 300, 200, 50, 30, 10 };
	int two[5] = { 512, 256, 128, 64, 32 };

	int answer = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		if (a == 1)
		{
			answer += one[0];
		}
		else if (a > 1 && a <= 3)
		{
			answer += one[1];
		}
		else if ( a >= 4 && a <= 6)
		{
			answer += one[2];
		}
		else if ( a >= 7 && a <= 10)
		{
			answer += one[3];
		}
		else if (a >= 11 && a <= 15)
		{
			answer += one[4];
		}
		else if (a >= 16 && a <= 21)
		{
			answer += one[5];
		}

		if (b == 1)
		{
			answer += two[0];
		}
		else if (b > 1 && b <= 3)
		{
			answer += two[1];
		}
		else if (b >= 4 && b <= 7)
		{
			answer += two[2];
		}
		else if (b >= 8 && b <= 15)
		{
			answer += two[3];
		}
		else if (b >= 16 && b <= 31)
		{
			answer += two[4];
		}

		cout << answer * 10000 << "\n";
		answer = 0;
	}

	return 0;
}
