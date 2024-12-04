#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

	int alphabet[26];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
		
	if (N % 2 == 0) {
		cout << "Duck";
	}
	else {
		cout << "Goose";
	}

	return 0;
}