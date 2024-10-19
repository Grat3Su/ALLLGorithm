#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> num(3);

  for (int i = 0; i < 3; i++)
    {        
      cin >> num[i];
    }

  sort(num.begin(), num.end());

  cout << num[1];
  
  return 0;
}
