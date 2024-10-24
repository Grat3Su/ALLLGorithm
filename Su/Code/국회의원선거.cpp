#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    priority_queue<pair<int, int>> pq;

    int num1 = 0;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        if (i == 0) {
            num1 = num;
        }
        else {
            pq.push({ num, i });
        }
    }

    int ans = 0;

    // 기호 1번이 제일 좋아야함
    while (!pq.empty() && pq.top().first >= num1) {
        pair<int, int> num = pq.top();
        pq.pop();

        num1++;
        ans++;
        pq.push({ num.first-1, num.second });
    }

    cout << ans;

    return 0;
}