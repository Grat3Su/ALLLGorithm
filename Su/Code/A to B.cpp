#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	// M의 마지막이 1이면 1 아니면 /2

	int ans = 1;
	while (M>N) {
		if (M % 10 == 1) {
			ans++;
			M /= 10;
		}
		else if (M%2 == 0) {
			M /= 2;
			ans++;
		}
		else {
			break;
		}

	}
	
	if (M != N) {
		ans = -1;
	}

	cout << ans;

	return 0;
}