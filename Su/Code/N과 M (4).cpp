#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int N, M;

void dfs(int idx, int cnt, string ans) {
    if (cnt == M) {
        cout << ans << "\n";
        return;
    }
    if (cnt > M) {
        return;
    }
    for (int i = idx; i <= N; i++) {
        string a = (ans + " " + to_string(i));
        dfs(i, cnt+1, a);
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        dfs(i, 1, to_string(i));
    }

    return 0;
}