#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string alpha = "abcdefghijklmnopqrstuvwxyz";
	string s;

	cin >> s;

	for (int i = 0; i < alpha.length(); i++)
	{
		cout << (int)s.find(alpha[i]) << " ";
	}

	return 0;
}
