#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string document, text;
	getline(cin, document);
	getline(cin, text);

	int idx = 0;
	int ans=0;
	for (int i = 0; i < document.size(); i++) {
		bool isCorrect = true;
		for (int j = 0; j < text.size(); j++) {
			if (j >= document.size() || document[i+j] != text[j]) {
				isCorrect = false;
				break;
			}
		}
		if (isCorrect) {
			ans++;
			i = i + text.size()-1;
		}
	}

	cout << ans;

	return 0;
}