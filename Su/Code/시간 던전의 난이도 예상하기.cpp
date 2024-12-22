#include <iostream>
#include <iomanip> // setprecision을 사용하기 위해 필요

using namespace std;

int main() {
  float N;
  cin >> N;

  float ans = 0;

  for (int i = 0; i < N; i++) {
    float num;
    cin >> num;
    ans += num;
  }

  // 소수점 둘째 자리까지 고정 출력
  cout << fixed << setprecision(2) << (ans / N);

  return 0;
}
