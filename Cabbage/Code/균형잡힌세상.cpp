#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (true)
	{
		string input;
		getline(cin, input);

		if (input == ".") break;

		stack<char> s;
		bool check = 0;
		for (int i = 0; i < input.length(); i++)
		{
			char c = input[i];

			if ((c == '(') || c == '[')
			{
				s.push(c);
			}
			else if (c == ')')
			{
				if (!s.empty() && s.top() == '(') s.pop();
				else
				{
					check = 1;
					break;
				}
			}
			else if (c == ']')
			{
				if (!s.empty() && s.top() == '[') s.pop();
				else
				{
					check = 1;
					break;
				}
			}
		}

		if (check == 0 && s.empty()) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
}
