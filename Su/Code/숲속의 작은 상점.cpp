#include <iostream>
#include <vector>

using namespace std;

int main() {
    int K, N;
    cin >> K >> N; // 아이템 종류와 방문한 동물의 수

    vector<int> itemCount(K + 1, 0); // 아이템 구매 횟수를 저장할 벡터 (1~K번 아이템)

    for (int i = 0; i < N; i++) {
        int m; // 동물이 구입한 물건의 수
        cin >> m;
        for (int j = 0; j < m; j++) {
            int item;
            cin >> item;
            itemCount[item]++; 
        }
    }

    // 1번부터 K번 아이템의 구매 횟수 출력
    for (int i = 1; i <= K; i++) {
        cout << itemCount[i] << " ";
    }

    return 0;
}
