#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    set<string> user;
    int answer = 0;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        if (s == "ENTER") {
            answer += user.size();
            user.clear();
        }
        else
        {
            user.insert(s);
        }

    }
    answer += user.size();
    
    std::cout << answer;
    return 0;
}