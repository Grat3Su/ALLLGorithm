#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	int ans = 0;

	for (int i = 0; i < s.length(); i++) {		
		if (s[i] == '=') {
			if (i > 0 && (s[i - 1] == 'z' && s[i - 2] == 'd')) {
				ans-=2;
			}
			else if (i > 0 && (s[i - 1] == 'c' || s[i - 1] == 's' || s[i - 1] == 'z')) {
				ans--;
			}
		}
		else if (s[i] == '-') {
			if (i > 0 && (s[i - 1] == 'c' || s[i - 1] == 'd')) {
				ans--;
			}
		}
		else if (s[i] == 'j') {
			if (i > 0 && (s[i - 1] == 'l' || s[i - 1] == 'n')) {
				ans--;
			}
		}
		ans++;
	}

	cout << ans;


	return 0;
}