
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <queue>

using namespace std;

int N, M;
char map[601][601] = {'X'};
bool visited[601][601] = { false };
int x = 0, y = 0;
int dx[] = { 0,0,1,-1 }, dy[] = { 1,-1,0,0 };

int bfs() {
    int answer = 0;
    queue<pair<int, int>> q;
    q.push({ x, y });
    visited[x][y] = true;
    while (!q.empty()) {
        int curx = q.front().first;
        int cury = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = curx + dx[i];
            int ny = cury + dy[i];
            if (nx >= N || nx < 0 || ny >= M || ny < 0 || visited[nx][ny] || map[nx][ny] == 'X') continue;
            visited[nx][ny] = true;
            q.push({nx, ny});
            if (map[nx][ny] == 'P')
                answer++;
        }
    }
    return answer;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        string campus;
        cin >> campus;
        for (int j = 0; j < M; j++) {
            map[i][j] = campus[j];
            if (campus[j] == 'I') {
                x = i;
                y = j;
            }
        }
    }

    int answer = bfs();
    if (answer == 0) {
        cout << "TT";
    }
    else
        cout << answer;


    return 0;
}