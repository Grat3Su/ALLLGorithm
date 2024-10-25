#include <iostream>
using namespace std;

int main()
{
	int kg;
	cin >> kg;

	int answer = 0;
	bool check = 0;

	while (kg >= 0)
	{
		if (kg % 5 == 0)
		{
			answer += kg / 5;
			check = 1;
			break;
		}
		kg -= 3;
		answer++;
	}

	if (!check) cout << "-1" << "\n";
	else cout << answer << "\n";

	return 0;
}
