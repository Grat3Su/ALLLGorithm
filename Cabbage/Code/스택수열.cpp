#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int cnt = 1;

	vector<char> v;
	stack<int> s;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		while (cnt <= num)
		{
			s.push(cnt);
			cnt++;
			v.push_back('+');
		}

		if (s.top() == num)
		{
			s.pop();
			v.push_back('-');
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";

}
