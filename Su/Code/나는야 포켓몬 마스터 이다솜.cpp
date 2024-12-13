#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	map<string, int> pockemon;
	map<int, string> pockemonNum;

	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;
		int idx = i+1;
		pockemon[name] = idx;
		pockemonNum[idx] = name;
	}

	for (int i = 0; i < M; i++) {
		string quest;
		cin >> quest;
		if (quest[0] >= '0' && quest[0] <= '9') {
			// 숫자
			
			cout << pockemonNum[stoi(quest)] << "\n";
		}
		else {
			cout << pockemon[quest] << "\n";
		}
	}
	

	return 0;
}