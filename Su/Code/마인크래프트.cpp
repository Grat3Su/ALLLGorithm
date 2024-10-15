#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M, B;
    cin >> N >> M >> B;

    vector<vector<int>> map(N, vector<int>(M));
    int totalBlocks = B;  // 사용 가능한 전체 블록 수
    int minHeight = 256;  // 문제에서 최대 256까지 높이를 가질 수 있다고 가정
    int maxHeight = 0;

    // 입력을 받으면서 최소 높이와 최대 높이를 계산합니다.
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
            maxHeight = max(maxHeight, map[i][j]);
            minHeight = min(minHeight, map[i][j]);
        }
    }

    pair<int, int> answer = { 99999999, -1 };  // 최소 시간, 최대 높이를 저장

    // 가능한 모든 높이(height)에 대해 반복
    for (int height = minHeight; height <= maxHeight; height++) {
        int remove = 0;  // 제거할 블록 수
        int add = 0;     // 추가할 블록 수

        // 각 칸에 대해 높이 계산
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (map[i][j] > height) {
                    remove += (map[i][j] - height);  // 블록을 제거해야 하는 경우
                } else {
                    add += (height - map[i][j]);     // 블록을 추가해야 하는 경우
                }
            }
        }

        // 사용할 수 있는 블록이 충분하지 않으면 스킵
        if (remove + B < add) continue;

        // 시간 계산: 블록 제거는 2초, 추가는 1초
        int time = remove * 2 + add;

        // 최소 시간을 찾고, 시간이 같다면 더 높은 높이를 선택
        if (time < answer.first || (time == answer.first && height > answer.second)) {
            answer.first = time;
            answer.second = height;
        }
    }

    // 결과 출력
    cout << answer.first << " " << answer.second;
    return 0;
}
