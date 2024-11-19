#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	float totalScore=0;
	float unit=0;

	for (int i = 0; i < 20; i++) {
		string s;
		cin >> s;

		// 과목 평점
		float score;
		cin >> score;

		// 학점
		string grade;
		cin>>grade;

		float curGrade = 0;

		if (grade[0] == 'A') {
			curGrade += 4;
		}
		else if (grade[0] == 'B') {
			curGrade += 3;
		}
		else if (grade[0] == 'C') {
			curGrade += 2;
		}
		else if (grade[0] == 'D') {
			curGrade += 1;
		}

		if(grade[0] == 'P') {
			score = 0;
		}
		else if(grade[1] == '+'){
			curGrade += 0.5f;
		}

		unit += score;
		totalScore += (score*curGrade);

	}

	float ans = totalScore/unit;
	cout << ans;


	return 0;
}