#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<bool> is_prime(M + 1, true);
    is_prime[0] = is_prime[1] = false; // 0과 1은 소수가 아님

    for (int i = 2; i * i <= M; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= M; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = N; i<=M; i++) {
        if (is_prime[i]) {
            cout << i << "\n";
        }
    }


    return 0;
}