#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool bigger(string a, string b){
    return a + b >  b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> num;
    
    
    for(int number : numbers){
        num.push_back(to_string(number));
    }
    
    sort(num.begin(), num.end(), bigger);
    
    // 가장 큰 숫자가 "0"인 경우 결과는 "0"
    if (num[0] == "0") {
        return "0";
    }
    
    // 정렬된 답 저장
    for(string number : num){
        answer += number;
    }
    
    return answer;
}