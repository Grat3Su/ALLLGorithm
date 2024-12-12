#include <string>
#include <vector>
#include <queue>

using namespace std;

void bfs(int start, vector<vector<int>> computers, vector<bool>& visits){
    queue<int> q;
    q.push(start);
    visits[start] = true;
    int n = computers.size();
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        
        for(int i = 0; i<n; i++){
            
            if(computers[x][i] == 1 && !visits[i]){
                q.push(i);
                visits[x] = true;
            }
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<bool> visits(computers.size(), false);
    for(int i = 0; i<n; i++){                
        if(visits[i] == true) continue;
        bfs(i, computers, visits);
        answer++;
    }
    return answer;
}