#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>

using namespace std;

deque<int> dq;
bool isEmpty() {
	if (dq.empty()) {
		return true;
	}
	return false;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	int n = -1;

	for (int i = 0; i < N; i++) {
		int command;
		cin >> command;

		switch (command)
		{
		case 1:
			cin >> n;
			dq.push_front(n);
			break;
		case 2:
			cin >> n;
			dq.push_back(n);
			break;
		case 3:
			n = -1;
			if (!isEmpty()) {
				n = dq.front();
				dq.pop_front();
			}

			cout << n << "\n";
			break;
		case 4:
			n = -1;
			if (!isEmpty()) {
				n = dq.back();
				dq.pop_back();
			}

			cout << n << "\n";
			break;
		case 5:
			cout << dq.size() << "\n";
			break;
		case 6:
			n = isEmpty() ? 1 : 0;
			cout << n << "\n";
			break;
		case 7:
			n = -1;
			if (!isEmpty()) {
				n = dq.front();
			}

			cout << n << "\n";
			break;
		case 8:
			n = -1;
			if (!isEmpty()) {
				n = dq.back();
			}

			cout << n << "\n";
			break;
		default:
			break;
		}
	}

	return 0;
}