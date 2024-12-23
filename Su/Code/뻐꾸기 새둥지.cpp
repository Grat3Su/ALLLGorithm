#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  int N;
  cin>>N;

  vector<int> bird(N);
  map<int, int> nest;
  for(int i = 0; i<N; i++){
    cin>> bird[i];    
  }

  for(int i = 0; i<N; i++){
    int pos = 1;
    for(int j = 0; j<N; j++){
        if(nest.find(pos) == nest.end()){
            nest[pos] = bird[i];
            bird[i] = pos;
            cout<<bird[i]<<"\n";
            break;
        }
        else{
            if (bird[i] < nest[pos]) {
                    pos = pos * 2; // 왼쪽 자식으로 이동
            }
             else {
                    pos = pos * 2 + 1; // 오른쪽 자식으로 이동
            }
        }
    }
  }

  return 0;
}