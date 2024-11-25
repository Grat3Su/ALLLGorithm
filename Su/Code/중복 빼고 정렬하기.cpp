#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; // 단어 개수
    cin >> N;

    set<int> ans;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        ans.insert(num);
    }

    for (auto a : ans) {
        cout << a << ' ';

    }
    return 0;
}
