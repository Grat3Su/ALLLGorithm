#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> download(3);
    cin >> download[0] >> download[1] >> download[2];

    // 세 수의 합 계산
    int total_sum = download[0] + download[1] + download[2];

    // 합을 3으로 나눈 몫이 기본적인 작업 수
    int answer = total_sum / 3;

    // 나머지가 있으면 1을 추가 (즉, 한 번 더 작업 필요)
    if (total_sum % 3 != 0) {
        answer++;
    }

    cout << answer << endl;
    return 0;
}
