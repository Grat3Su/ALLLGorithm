#include <iostream>
#include <string>
using namespace std;

int main() {
  int num;
  int sum = 0;
  string text_num;

  cin >> num >> text_num;
  
  for (int i = 0; i < num; i++)
    {
      sum += (text_num[i] - '0');
    }

  cout << sum;
  return 0;
}
