#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int convertime(string time) {
	int hour = stoi(time.substr(0, 2));
	int minute = stoi(time.substr(3, 2));

	return hour * 60 + minute;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string s, e, q;
	cin >> s >> e >> q;

	int S = convertime(s), E = convertime(e), Q = convertime(q);

	unordered_map<string, int> attend;

	string time, name;
	int ans = 0;
	while (cin >> time >> name) {
		int curTime = convertime(time);
		if (curTime <= S) {
			attend[name] = 1;
		}
		else if (curTime >= E && curTime <= Q && attend[name] == 1) {
			attend[name] = 2;
			ans++;
		}
	}

	cout << ans;

	return 0;
}