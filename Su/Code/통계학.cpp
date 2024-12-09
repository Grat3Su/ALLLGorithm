	#include <iostream>
	#include <string>
	#include <vector>
	#include <algorithm>
	#include <map>
	#include <cmath>

	using namespace std;
	int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);

		int N;
		cin >> N;

		vector<int> number(N);

		for (int i = 0; i < N; i++) {
			cin >> number[i];
		}

		//산술평균 : N개의 수들의 합을 N으로 나눈 값
		// 중앙값: N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
		// 최빈값 : N개의 수들 중 가장 많이 나타나는 값
		// 범위 : N개의 수들 중 최댓값과 최솟값의 차이

		double sum=0;
		map<int, int> freq;
		sort(number.begin(), number.end());


		for (int i = 0; i < N; i++) {
			sum += number[i];
			freq[number[i]]++;
		}

		vector<int> modes;
		int maxfreq = 0;

		for (auto n : freq) {
			if (n.second > maxfreq) {
				maxfreq = n.second;
				modes = { n.first }; // 최빈값 갱신
			}
			else if (n.second == maxfreq) {
				modes.push_back(n.first);
			}
		}

		sort(modes.begin(), modes.end());

		if(round(sum / N) > -1) 
			cout << abs(round(sum / N)) << "\n";
		else
			cout << round(sum / N) << "\n";
		cout << number[N/2] << "\n";

		if (modes.size() > 1) {
			cout << modes[1] << "\n";
		}
		else {
			cout << modes[0] << "\n";
		}
		cout << (number[N-1] - number[0]) << "\n";

		return 0;
	}