#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b) {
    if (a.length() == b.length()) return a < b; // 길이가 같으면 사전순
    return a.length() < b.length(); // 길이가 다르면 길이순
}

int main() {
    int N;
    cin>>N;
    vector<vector<string>> step(N+1);

    step[0].push_back("");
    step[1].push_back("1");
    if(N>=2){
        step[2].push_back("11");
        step[2].push_back("2");
    }

    for (int i = 3; i <= N; i++) {
        
        for (string path : step[i - 1]) {
            step[i].push_back(path + "1");
        }
        
        for (string path : step[i - 2]) {
            step[i].push_back(path + "2");
        }
    }


    sort(step[N].begin(), step[N].end(), compare);

    for(int i = 0; i<step[N].size(); i++){
        cout<<step[N][i]<<"\n";
    }
    
  return 0;
}