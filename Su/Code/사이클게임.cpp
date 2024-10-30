#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;
int N, M;
int parents[500001];

int GetParents(int a) {
    if (parents[a] == a) return a;
    return parents[a] = GetParents(parents[a]);
}

bool FindParents(int a, int b) {
    int pa = GetParents(a);
    int pb = GetParents(b);

    if (pa == pb) {
        return true;
    }
    return false;
}

void UnionParents(int a, int b) {
    int pa = GetParents(a);
    int pb = GetParents(b);

    if (pa > pb) {
        parents[pa] = pb;
    }
    else {
        parents[pb] = pa;
    }
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        parents[i] = i;
    }
    
    bool cycle = false;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        if (FindParents(a, b)) {
            cycle = true;
            cout << (i+1);
            break;
        }
        UnionParents(a, b);
    }

    if (!cycle) {
        cout << 0;
    }

    return 0;
}
