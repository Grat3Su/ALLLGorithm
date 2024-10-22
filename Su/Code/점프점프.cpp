#include <iostream>
#include <vector>
#include <string>

using namespace std;

int map[100001];
bool visited[100001];
int N;

void dfs(int cur) {
    if (cur > N || cur < 1) return;
    visited[cur] = true;

    dfs(cur + map[cur]);
    dfs(cur - map[cur]);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> map[i];        
    }

    int cur;
    cin >> cur;
    dfs(cur);

    int ans = 0;

    for (int i = 1; i <= N; i++) {
        if (visited[i]) ans++;
    }

    cout << ans;

    return 0;
}