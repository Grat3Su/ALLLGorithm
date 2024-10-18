
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    
    cin >> N;
    unordered_map<string, int> marathon;
    for (int i = 0; i < N; i++) {
        string people;
        cin >> people;
        marathon[people]++;
    }

    for (int i = 0; i < N - 1; i++) {
        string goal;
        cin >> goal;
        marathon[goal]--;
    }

    for(auto p : marathon) {
        if (p.second > 0) {
            cout << p.first;
            return 0;
        }
    }
    return 0;
}