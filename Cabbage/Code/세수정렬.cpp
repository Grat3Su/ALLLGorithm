#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> save;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		save.push_back(n);
	}

	sort(save.begin(), save.end());

	for (int i = 0; i < 3; i++)
	{
		cout << save[i] << " ";
	}

	return 0;
}
