#include<iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;

	cin >> n >> k;

	queue<int> q;

	cout << "<";
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	while (q.size() > 1)
	{
		for (int i = 0; i < k - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
			
		cout << q.front() << ", ";
		q.pop();
	}

	cout << q.front() << ">\n";

	return 0;
}
