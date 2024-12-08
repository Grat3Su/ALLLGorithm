#include <vector>
#include <queue>
using namespace std;

class Coordx{
    public:
        int x;
        int y;
        int cnt;

        Coordx(int x, int y, int cnt):x(x), y(y), cnt(cnt){}
};

int bfs(vector<vector<int>> maps){
    int n = maps.size();
    int m = maps[0].size();
    
    queue<Coordx> q;
    q.push(Coordx{0,0,1});
    maps[0][0] = 0;
    
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    
    while(!q.empty()){
        Coordx coordx = q.front();
        q.pop();
        
        int x = coordx.x;
        int y = coordx.y;
        int cnt = coordx.cnt;
        
        if(x == n-1&& y == m-1) return cnt;
        
        for(int i = 0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= n||ny >= m||nx<0||ny<0||maps[nx][ny] == 0) continue;
            
            maps[nx][ny] = 0;
            q.push(Coordx(nx,ny,cnt+1));            
        }
    }
    return -1;    
}

int solution(vector<vector<int>> maps)
{
    int answer = bfs(maps);
    return answer;
}