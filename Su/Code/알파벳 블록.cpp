#include <iostream>
#include <vector>
#include <string>
#include <deque>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    deque<pair<int, string>> answer;
    
    for (int i = 0; i < N; i++) {
        int command;
        string addText;
        cin >> command;
        switch (command) {
        case 1:
            // 맨 뒤에 문자 추가
            cin >> addText;            
            answer.push_back({ i, addText });
            break;
        case 2:
            // 맨 앞에 문자 추가
            cin >> addText;
            answer.push_front({ i, addText });
            break;
        case 3:
            if (!answer.empty()) {
                if (answer.size() == 1) {
                    answer.pop_back();
                }
                else {
                    if (answer.front().first > answer.back().first) {
                        answer.pop_front();
                    }
                    else {
                        answer.pop_back();
                    }
                }
            }
            break;
        }
    }

    if (answer.empty()) {
        cout << 0;
    }
    else {
        for (auto s : answer) {
            cout << s.second;
        }
    }

    return 0;
}