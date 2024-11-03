#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int fibbo (int n) {

    if (n <= 1) return n;
    else return fibbo(n-1) + fibbo(n-2);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    int ans = fibbo(N);

    cout << ans;

    return 0;
}