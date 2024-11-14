#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<long long> arr(N+M);

    for (int i = 0; i < N+M; i++) {
        long long num;
        cin >> num;

        arr[i] = num;
    }

    sort(arr.begin(), arr.end());

    for (auto a : arr) {
        cout << a << " ";
    }
    
    return 0;
}