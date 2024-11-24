#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; // 단어 개수
    cin >> N;

    int ans = 0; 

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        set<char> seen;  // 이미 나온 문자를 저장
        bool isValid = true;  // 해당 단어가 그룹 단어인지 체크

        for (size_t j = 0; j < s.size(); j++) {
            if (seen.find(s[j]) != seen.end() && s[j] != s[j - 1]) {
                isValid = false;
                break;
            }
            seen.insert(s[j]);  // 문자를 집합에 추가
        }

        if (isValid) {
            ans++; // 그룹 단어일 경우 증가
        }
    }

    cout << ans << '\n';
    return 0;
}
