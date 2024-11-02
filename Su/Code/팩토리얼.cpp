#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int factorial (int n) {

    int result = 1;

    for (int i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    int ans = factorial(N);

    cout << ans;

    return 0;
}