    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
    #include <sstream>
    #include <stack>

    using namespace std;

    int main() {
        ios::sync_with_stdio(false); // 입출력 속도 최적화
        cin.tie(NULL);
    
        int N, M;
        string word;
        string boom;
        stack<char> s;

        cin >> word >> boom;

        for (int i = 0; i < word.length(); i++) {
            s.push(word[i]);
            if (word[i] == boom[boom.length() - 1] && s.size() >= boom.length()) {
                string tmp;

                for (int j = 0; j < boom.length(); j++) {
                    tmp.push_back(s.top());
                    s.pop();
                }
                reverse(tmp.begin(), tmp.end());

                if (tmp.compare(boom) != 0) {
                    for (int k = 0; k < tmp.length(); k++) {
                        s.push(tmp[k]);
                    }
                }
            }
        }

        vector<char> answer;
        while (!s.empty()) {
            answer.push_back(s.top());
            s.pop();
        }

        if (answer.size() > 0) {
            reverse(answer.begin(), answer.end());

            for(int i = 0; i<answer.size(); i++)
            cout << answer[i];
        }
        else{
            cout << "FRULA";
        }
        return 0;
    }
