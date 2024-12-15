#include <string>
#include <vector>

using namespace std;

void makeNumber(vector<int> numbers, int target, int cur, int cnt, int* answer){
    if(cnt == numbers.size()){        
        if(cur == target)
            (*answer)++;
        return;
    }
    makeNumber(numbers, target, cur+numbers[cnt], cnt+1, answer);    
    makeNumber(numbers, target, cur-numbers[cnt], cnt+1, answer);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    makeNumber(numbers, target, 0, 0, &answer);
    
    return answer;
}