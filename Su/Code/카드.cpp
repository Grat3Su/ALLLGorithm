#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    map<int, int> card;
    long long ans = 0;

    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        card[num]++;

        if (card[num] > card[ans]) {            
            ans = num;
        }
        else if (card[num] == card[ans]) {
            ans = min(ans, num);
        }
    }
;
    cout << ans;

    return 0;
}