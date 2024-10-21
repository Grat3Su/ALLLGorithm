#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool comp(pair<int, string>a, pair<int, string>b)
{
  return a.first < b.first;
}

int main() {
  int n;
  cin >> n;

  pair<int, string>people_data;
  vector<pair<int, string>>people;

  for (int i = 0; i < n; i++)
    {
      cin >> people_data.first >> people_data.second;
      people.push_back(people_data);
    }

    stable_sort(people.begin(), people.end(), comp);

  for (int i = 0; i < people.size(); i++)
    {
      cout << people[i].first << ' ' << people[i].second << '\n';
    }
  
  return 0;
}
