#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s; // 단어 개수
	cin >> s;
	vector<int> number;
	int zero = 0;
	int one = 0;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] != s[i - 1]) {
			number.push_back(s[i]);
			if (s[i - 1] == '0') zero++;
			else one++;
		}
	}
	if (s[s.length() - 1] == '0') {
		zero++;
	}
	else 
		one++;

	cout << (one > zero ? zero : one);

	return 0;
}
