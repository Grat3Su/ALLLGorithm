#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, S;
    cin >> N >> S;
    int ans = 100002;

    vector<int> numbers(N);

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    int start=0, end=0;
    int sum = 0;

    while (end <= N) {

        if (sum >= S) {
            sum -= numbers[start];
            ans = min(ans, end - start);
            start++;
        }
        else {
            if(end < N)
                sum += numbers[end];
            end++;
        }
    }

    cout << (ans == 100002 ? 0 : ans);

    return 0;
}