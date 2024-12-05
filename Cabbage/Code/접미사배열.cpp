#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string word;
	vector<string> v;
	cin >> word;

	for (int i = 0; i < word.length(); i++)
	{
		string temp = word.substr(i, word.length());
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < word.length(); i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}
