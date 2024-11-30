#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N, M; 
int dfs(int idx, vector<vector<int>> &v, vector<bool>& visit) {
	int ans = 0;
	for (int i = 1; i < v[idx].size(); i++) {
		if (v[idx][i] == 1 && !visit[i]) {
			ans++;
			visit[i] = true;
		}
	}
	return ans;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	vector<vector<int>> v(N+1, vector<int>(N+1));
	vector<bool> visit(N+1);


	for (int i = 0; i < M; i++) {
		int to, from;
		cin >> from >> to;
		v[to][from] = 1;
		v[from][to] = 1;
	}
	visit[1] = true;
	int ans = 0;
	for (int i = 2; i <= N; i++) {
		if (v[1][i] == 1) {
			if(!visit[i])
				ans++;
			visit[i] = true;
			ans+= dfs(i, v, visit);
		}
	}

	cout << ans;

	return 0;
}
