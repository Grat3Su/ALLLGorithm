#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;


	for (int i = 0; i < N; i++) {

		cout << "Class " << (i + 1) << "\n";
		int M;
		cin >> M;
		vector<int> grade(M);

		for (int j = 0; j < M; j++) {
			cin >> grade[j];			
		}

		sort(grade.begin(), grade.end());

		int gap = 0;

		for (int j = 1; j < M; j++) {
			if (abs(grade[j] - grade[j - 1]) > gap) {
				gap = abs(grade[j] - grade[j - 1]);
			}
		}

		cout << "Max " << grade[grade.size() - 1] << ", " << "Min " << grade[0] << ", " << "Largest gap " << gap << "\n";
	}


	return 0;
}
