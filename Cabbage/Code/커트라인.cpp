#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() 
{
  int student;
  int prize;
  int score;
  vector<int> record;

  cin >> student >> prize;

  for (int i = 0; i < student; i++) {
    cin >> score;
    record.push_back(score);
  }

  sort(record.begin(), record.end(), greater<>());

  cout << record.at(prize - 1);
}
