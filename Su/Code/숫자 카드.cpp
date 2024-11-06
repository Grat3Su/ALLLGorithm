#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    set<int> card1;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        card1.insert(num);
    }

    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (card1.find(num) != card1.end()) {
            cout << "1 ";
        }
        else {
            cout << "0 ";
        }
    }

    return 0;
}