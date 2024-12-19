#include <iostream>

using namespace std;

int main() {
  long long ans = 0;

    int N;
    cin>>N;
    for(int i = 0; i<N; i++){
        int a_i;
        cin>>a_i;
        
        ans += a_i;
    }

    cout<<ans;

  return 0;
}