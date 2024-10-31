#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    set<string> stringArr;

    int size = s.length();
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            stringArr.insert(s.substr(i, j - i + 1));
        }
    }
    
    cout << stringArr.size();


    return 0;
}