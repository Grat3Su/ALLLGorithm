#include<iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, t;
	cin >> n;

	stack<int> s;
	int num = 1;

	while (n--)
	{
		cin >> t;

		if (t == num)
			num++;
		else s.push(t);

		while (!s.empty() && s.top() == num)
		{
			s.pop();
			num++;
		}
	}

	if (s.empty())
	{
		cout << "Nice";
	}
	else cout << "Sad";

	return 0;
}
