#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	string hearname, seename;
	vector<string> hearv, answerv;


	for (int i = 0; i < n; i++)
	{
		cin >> hearname;
		hearv.push_back(hearname);
	}

	sort(hearv.begin(), hearv.end());

	for (int i = 0; i < m; i++)
	{
		cin >> seename;
		if (binary_search(hearv.begin(), hearv.end(), seename))
		{
			answerv.push_back(seename);
		}
	}

	sort(answerv.begin(), answerv.end());

	cout << answerv.size() << "\n";

	for (auto a : answerv)
	{
		cout << a << "\n";
	}
	

	return 0;
}
