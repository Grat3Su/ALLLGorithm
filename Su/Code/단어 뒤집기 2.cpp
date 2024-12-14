#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<string> s;
	string input;
	
	getline(cin, input);

	string cur;
	bool tag = false;
	for (int i = 0; i < input.length(); i++) {
		if (!tag && input[i] == ' ') {
			s.push_back(cur);
			cur = "";
		}
		else if (input[i] == '>') {
			cur += input[i];
			s.push_back(cur);
			cur = "";
			tag = false;
		}
		else {
			if (input[i] == '<') {
				if (cur != "") {
					s.push_back(cur);
					cur = "";
				}

				tag = true;
			}
			cur += input[i];
		}
	}
	s.push_back(cur);

	for (int i = 0; i < s.size(); i++) {
		if (s[i][0] == '<') {
			for (int j = 0; j < s[i].length(); j++) {
				cout << s[i][j];
			}
		}
		else {
			for (int j = s[i].length()-1; j >= 0; j--) {
				cout << s[i][j];
			}
			if ((i < s.size() - 1 && (s[i+1][0] != '<'))) {
				cout << " ";
			}
		}
	}


	return 0;
}