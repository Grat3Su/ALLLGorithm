#include<iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, answer = 0;
	cin >> n;

	string str;
	set<string> gom;

	while (n--)
	{
		cin >> str;
		if (str == "ENTER")
		{
			answer += gom.size();
			gom.clear();
		}
		else gom.insert(str);
	}
	answer += gom.size();
	cout << answer;

	return 0;
}
