#include <iostream>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    answer.push_back(x);
    
    for (int i = 0; i < n-1; i++)
    {
        answer.push_back(answer.back() + x);
    }
    
    return answer;
}
