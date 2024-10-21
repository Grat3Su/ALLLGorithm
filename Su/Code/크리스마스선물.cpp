#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    priority_queue<int> pq;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (a == 0) {
            if (pq.empty()) cout << "-1\n";
            else {
                
                cout<<pq.top()<<"\n";
                pq.pop();
            }
        }
        else {
            for (int i = 0; i < a; i++) {
                int present;
                cin >> present;
                pq.push(present);
            }
        }
    }

    return 0;
}