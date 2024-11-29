#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Country {
public:
	int country;
	int gold;
	int silver;
	int bronze;

	Country(int country, int gold, int silver, int bronze) {
		this->country = country;
		this->gold = gold;
		this->silver = silver;
		this->bronze = bronze;
	}

	Country() {};

	bool operator < (const Country& other){
		if (other.gold != gold) return gold > other.gold;
		if (other.silver != silver) return silver > other.silver;
		return bronze > other.bronze;
	}
	bool operator == (const Country& other){
		return gold == other.gold && silver == other.silver && bronze == other.bronze;
	}
};


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M; // 등수 알고싶은 국가
	cin >> N >> M;

	vector<Country> co(N);

	for (int i = 0; i < N; i++) {
		int country, gold, silver, bronze;
		cin>> country>> gold>> silver>> bronze;

		co[i] = Country(country, gold, silver, bronze);
	}

	sort(co.begin(), co.end());

	int grade = 1;
	for (int i = 0; i < N; i++) {
		if (i>0&& !(co[i - 1] == co[i])) {
			grade = i + 1;
		}

		if (co[i].country == M) break;
	}

	cout << grade;

	return 0;
}
