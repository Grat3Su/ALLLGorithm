#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int i = 0; i < commands.size(); i++)
    {
        int start = commands[i][0] - 1;
        int end = commands[i][1] - 1;
        int select = commands[i][2] - 1;
        
        
        vector<int> v;
        for (int j = start; j <= end; j++)
        {
            v.push_back(array[j]);
        }
        
        
        sort(v.begin(), v.end());
        
        answer.push_back(v[select]);
    }
    
    return answer;
}
