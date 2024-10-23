#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    vector<string> str;

    for (int i = 0; i < s.length(); i++) {
        string newString = s;
        str.push_back(newString.substr(i, s.length()));
    }

    sort(str.begin(), str.end());

    for (auto ss : str) {
        cout << ss << "\n";
    }

    return 0;
}