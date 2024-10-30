#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> soldier(N+1);

    for (int i = 1; i <= N; i++) {
        cin >> soldier[i];
    }
    
    reverse(soldier.begin() + 1, soldier.end());

    int dp[2001];

    fill(dp + 1, dp + 2001, 1);
    
    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            if (soldier[i] > soldier[j]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    int answer = 0;
    for (int i = 1; i <= N; i++) {
        answer = max(dp[i], answer);
    }

    cout << (N - answer);


    return 0;
}