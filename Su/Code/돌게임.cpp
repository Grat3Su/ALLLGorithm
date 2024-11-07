#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    if (N % 2 == 0) {
        cout << "CY";
    }
    else {
        cout << "SK";
    }

    return 0;
}