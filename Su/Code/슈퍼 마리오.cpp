#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int Compare(int num) {
    if (num > 100) {
        return num - 100;
    }
    return 100 - num;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> mushroom(11, 0);

    for (int i = 0; i < 10; i++) {
        cin >> mushroom[i + 1];

        mushroom[i + 1] += mushroom[i];
    }
    
    int answer = 0;
    for (int i = 1; i < 11; i++) {
        if (Compare(mushroom[i]) > Compare(answer)) {
            break;
        }
        else
        {
            answer = mushroom[i];
        }
        
    }

    cout << answer;

    return 0;
}