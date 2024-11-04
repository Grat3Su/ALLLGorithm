#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

// 코드 구분
bool isCpp(string s) {
    for (char c : s) {
        if (c == '_') return true;
    }
    return false;
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    bool isC = isCpp(s);

    if (isC && (s[0] == '_' || s[s.length() - 1] == '_')) {
        cout << "Error!";
        return 0;

    }
    else if (!isC && (s[0] >= 'A' && s[0] <= 'Z')) {
        cout << "Error!";
        return 0;
    }

    string answer="";

    for (int i = 0; i < s.length(); i++) {
        if (isC) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                answer = "Error!";
                break;
            }
            if (s[i] != '_') {
                answer += s[i];
            }
            else if (s[i] == '_' && s[i - 1] == '_') {
                answer = "Error!";
                break;
            }

            if (i > 0 && s[i - 1] == '_') {
                answer[answer.length() - 1] = toupper(s[i]);
            }
        }
        else {
            if (s[i] == toupper(s[i])) {
                answer += '_';
                answer += tolower(s[i]);
            }
            else {
                answer += s[i];
            }        }
    }

    cout << answer;

    return 0;
}