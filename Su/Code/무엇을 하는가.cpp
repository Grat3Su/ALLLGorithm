#include <iostream>

using namespace std;

void WhatDoesItDo(int m){
    if(m < 10){
        cout<<m;
        //return m;
    }
    else{
        WhatDoesItDo((m/10));        
        cout<<(m%10);
        //return (m%10);
    }
}

int main() {
  int num;
  cin>>num;

  WhatDoesItDo(num);
  return 0;
}