#include <iostream>
#include <vector>
using namespace std;

int ans;

void func(int N){
    if(N == 1){
        ans += 1;
        return;
    }
    else if(N < 1){
        return;
    }
    func(N-1);
    func(N-2);
    func(N-3);
}

int main() {
    int N;
    cin >> N;
    
    func(N);

    // N번째 값 출력
    cout << ans;

    return 0;
}
