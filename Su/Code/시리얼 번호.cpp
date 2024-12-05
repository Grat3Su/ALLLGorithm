#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Guitar {
public:
	string serial;

	Guitar() {}

	// 1. A, B 길이가 짧다
	// 2. 모든 숫자를 합쳤을 때 작은 값
	// 3. 사전순 but 숫자로 시작하면 작음

	bool operator < (const Guitar& g) {
		if (g.serial.length() != serial.length()) return g.serial.length() > serial.length();
		
		int A = 0;
		int B = 0;
		for (int i = 0; i < serial.length(); i++) {
			if(isdigit(serial[i])) A +=(serial[i]-'0');
			if(isdigit(g.serial[i])) B +=(g.serial[i]-'0');
		}

		if (A != B) return A<B;
		return serial < g.serial;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	vector<Guitar> guitar(N);

	for (int i = 0; i < N; i++) {
		cin>>guitar[i].serial;
	}

	sort(guitar.begin(), guitar.end());

	for (const auto& a : guitar) {
		cout << a.serial << "\n";
	}


	return 0;
}