
#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> dolls;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        
        if (num == 1) {
            dolls.push_back(i);

        }
    }

    if (dolls.size() < K) {
        cout << -1;
        return 0;
    }

    int start = 0, end = K - 1;
    int answer = 9999999;
    for (int i = 0; i <= dolls.size()-K; i++) {
        answer = min(answer, dolls[end] - dolls[start]+1);
        end++;
        start++;
    }
    std::cout << answer;
}