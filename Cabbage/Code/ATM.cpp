#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() 
{
  int peoplenum;

  cin >> peoplenum;

  vector<int>line;

  for (int i = 0; i < peoplenum; i++)
    {
      int k;
      cin >> k;
      line.push_back(k);
    }

  sort(line.begin(), line.end());

  int sum = 0;
  
  for (int i = 0; i < peoplenum; i++)
    {
      line[i + 1] += line[i];
      sum += line[i];
    }

  cout << sum;
  
  return 0;
}
