#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (int i = 0; i < commands.size(); i++) {
        int start = commands[i][0] - 1;
        int end = commands[i][1];
        vector<int> newArray(array.begin() + start, array.begin() + end);
        sort(newArray.begin(), newArray.end());
        answer.push_back(newArray[commands[i][2] - 1]);
    }
    return answer;
}