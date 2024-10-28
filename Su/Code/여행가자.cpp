#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;
int N, M;
int parents[201];

int GetParents(int a) {
    if (parents[a] == a) return a;

    return parents[a] = GetParents(parents[a]);
}

bool FindParent(int a, int b) {
    int pa = GetParents(a);
    int pb = GetParents(b);

    if (pa == pb) {
        return true;
    }
    
    return false;
}

void Union(int a, int b) {
    int pa = GetParents(a);
    int pb = GetParents(b);

    if (pa < pb) {
        parents[pb] = pa;
    }
    else {
        parents[pa] = pb;
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        parents[i] = i;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int road;
            cin >> road;
            if (road) {
                Union(i, j);
            }
        }
    }

    int prev;
    cin >> prev;
    for (int i = 1; i < M; i++) {
        int next;
        cin >> next;
        if (!FindParent(prev, next)) {
            cout << "NO";
            return 0;
        }
        prev = next;
    }
    cout << "YES";

    return 0;
}
