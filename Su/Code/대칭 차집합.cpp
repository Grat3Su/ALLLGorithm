#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    map<int, int> minus;

    for (int i = 0; i < N+M; i++) {
        int num;
        cin >> num;
        minus[num]++;
    }

    int size = 0;
    for (auto n : minus) {
        if (n.second == 1) {
            size++;
        }
    }

            cout << size << "\n";

    return 0;
}