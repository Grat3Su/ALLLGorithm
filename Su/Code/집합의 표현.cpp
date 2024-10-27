#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int N, M;
int parents[1000001];

int GetParent(int a) {
    if (parents[a] == a)
    {
        return a;
    }
    return parents[a] = GetParent(parents[a]);
}

void Find(int a, int b) {
    int pa = GetParent(a);
    int pb = GetParent(b);
    if (pa == pb) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

void Union(int a, int b) {
    int pa = GetParent(a);
    int pb = GetParent(b);
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

    for (int i = 1; i <= N; i++) {
        parents[i] = i;
    }

    for (int i = 0; i < M; i++) {
        int o, a, b;
        cin >> o >> a >> b;
        if (!o) {
            Union(a, b);
        }
        else {
            Find(a, b);
        }
    }

    return 0;
}