#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long gcd(int a, int b) {
    if (a < b) {
        int t = a;
        a = b;
        b = t;
    }

    while (true) {
        int result = a % b;
        if (result == 0) {
            return b;
        }
        a = b;
        b = result;
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N, M;
    cin >> N >> M;

    long long ans = (N * M) / gcd(N, M);

    cout << ans;

    return 0;
}