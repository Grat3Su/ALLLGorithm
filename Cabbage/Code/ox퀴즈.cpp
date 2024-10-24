#include <iostream>
using namespace std;

int main() {

  int test_num;
  string ox;

  int score;
  int Ocount;
  cin >> test_num;

  for (int i = 0; i < test_num; i++)
    {
      cin >> ox;

      score = 0;
      Ocount = 1;

      for (int j = 0; j < ox.length(); j++)
        {
          if (ox[j] == 'O')
            score += Ocount++;
          else if (ox[j] == 'X')
            Ocount = 1;
        }

      cout << score << endl;
    }
  
  return 0;
}
