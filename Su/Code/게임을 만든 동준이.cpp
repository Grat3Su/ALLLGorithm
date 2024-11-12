#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int ans = 0;
    vector<int>level(N);

    for (int i = 0; i < N; i++) {
        cin >> level[i];
    }

    for (int i = N-1; i >0 ; i--) {
        while (level[i] <= level[i - 1]) {
            level[i - 1]--;
            ans++;
        }
    }
;
    cout << ans;

    return 0;
}