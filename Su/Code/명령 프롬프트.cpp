#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	vector<string> file(N);
	for (int i = 0; i < N; i++) {
		cin >> file[i];
	}

	if (N == 1) {
		cout << file[0];
		return 0;
	}


	for (int i = 0; i < file[0].length(); i++) {
		bool flag = false;
		char c = file[0][i];
		for (int j = 1; j < N; j++) {
			if (c != file[j][i]) {
				flag = true;
				break;
			}
		}

		if (flag) {
			cout << "?";
		}
		else {
			cout << c;
		}
	}

	return 0;
}