#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {    
    // 정렬
   sort(citations.begin(), citations.end());
    
    // 논문이 h 이상 인용된게 h 이하면 return해야함
    int size = citations.size();
    
    for(int i = 0; i<size; i++){
        //논문 인용 횟수가 h보다 크거나 같다
        if(citations[i] >= (size - i)){
            return size - i;
        }
    }
    
    return 0;
}