#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

	int alphabet[26];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;


	for (int i = 0; i < s.length(); i++) {
		alphabet[s[i]-'A']++;
	}

	int mid = -1;
	int odd = 0;

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] % 2 == 1) {
			mid = i;
			odd++;
			alphabet[i]--;

			if (odd > 1) {
				cout << "I'm Sorry Hansoo";
				return 0;
			}
		}
	}

	string ans = "";
	string tmp = "";

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > 0) {
			for (int j = 0; j < alphabet[i] / 2; j++) {
				ans+= i+'A';
			}
		}
	}

	tmp = ans;
	reverse(tmp.begin(), tmp.end());
	if (mid != -1) {
		ans += mid + 'A';
	}

	ans += tmp;

	cout << ans;

	return 0;
}