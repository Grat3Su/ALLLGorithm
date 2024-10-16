#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() 
{
  vector<pair<int, int>> problem(8);


  for (int i = 0; i < 8; i++)
    {
      cin >> problem[i].first;
      problem[i].second = i + 1;
    }

  sort(problem.begin(), problem.end(), greater<>());

  int sum = 0;
  vector <int> v;

  for (int i = 0; i < 5; i++)
    {
      sum += problem[i].first;
      v.push_back(problem[i].second);
    }

  cout << sum << endl;

  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;

  return 0;
}
