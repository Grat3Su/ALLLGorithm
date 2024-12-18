#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> map(5,vector<int>(5, -1));


  for(int i = 0; i < 5; i++){
    for(int j = 0; j<=i; j++){
        int num;
        cin>>num;
        map[i][j] = num;
    }
  }
    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};
    vector<vector<int>> _map(5,vector<int>(5));

   for(int i = 0; i < 5; i++){
    for(int j = 0; j<=i; j++){
        
        if(i == 0 && j == 0){
            _map[i][j] = map[i][j];
        }
        if(i == 0){
            _map[i][j] =  _map[i][j-1]+map[i][j];
        }
        else if(j == 0){
            _map[i][j] =_map[i-1][j]+map[i][j];
        }
        else{
            _map[i][j] = max(_map[i-1][j]+map[i][j], _map[i][j-1]+map[i][j]);

        }
    }
  } 
  cout<<_map[4][4];

  return 0;
}