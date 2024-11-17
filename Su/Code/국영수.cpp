#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
class Grade
{
public:
	string name;
	int ko;
	int en;
	int math;

	Grade(string name,	int ko,	int en,	int math) {
		this->name = name;
		this->ko = ko;
		this->en = en;
		this->math = math;
	}

	bool operator<(const Grade& other) const {
		if (ko != other.ko) return ko > other.ko; // 국어 내림차순
		if (en != other.en) return en < other.en; // 영어 오름차순
		if (math != other.math) return math > other.math; // 수학 내림차순
		return name < other.name; // 이름 사전순
	}


private:
};


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	vector<Grade> gr;
	

	for (int i = 0; i < N; i++) {
		string name;
		int ko;
		int en;
		int math;
		cin >> name >> ko >> en >> math;
		gr.push_back(Grade(name, ko, en, math));
	}

	sort(gr.begin(), gr.end());

	for (auto n : gr) {
		cout << n.name<<"\n";
	}

	return 0;
}