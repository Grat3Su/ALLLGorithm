#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct student
{
	string name;
	int ko, en, ma;
};

bool cmp(student a, student b)
{
	if (a.ko == b.ko && a.en == b.en && a.ma == b.ma)
		return a.name < b.name;
	if (a.ko == b.ko && a.en == b.en)
		return a.ma > b.ma;
	if (a.ko == b.ko)
		return a.en < b.en;
	return a.ko > b.ko;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<student> stu(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> stu[i].name >> stu[i].ko >> stu[i].en >> stu[i].ma;
	}

	sort(stu.begin(), stu.end(), cmp);

	for (int i = 0; i < n; i++)
	{
		cout << stu[i].name << "\n";
	}

	return 0;
}
