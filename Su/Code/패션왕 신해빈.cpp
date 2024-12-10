#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		map<string, int> clothes;

		int N;
		cin >> N;
		for (int i = 0; i < N; i++) {

			string name, type;
			cin >> name >> type;

			clothes[type]++;
		}

		int ans = 1;
		int onlyone = 0;
		for (auto cloth : clothes) {
			ans *= (cloth.second + 1);
		}

		ans -= 1;

		cout << ans << "\n";
	}
	return 0;
}