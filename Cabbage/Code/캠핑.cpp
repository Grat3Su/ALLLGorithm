#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int l, p, v;
	int i = 0;
	int answer = 0;

	while(true)
	{
		cin >> l >> p >> v;
		if (l == 0 && p == 0 && v == 0)
			break;

		answer = ((v / p) * l) + min(v % p, l);
		cout << "Case " << ++i << ": " << answer << "\n";
	}

	return 0;
}
