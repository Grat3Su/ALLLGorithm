#include <iostream>
#include <vector> 
#include <string> 

using namespace std;

int main() {
    string menu;
    cin>> menu;

    for(int i = 0; i<menu.length(); i++){
        int num;
        cin >> num;

        char newWord = '\0';
        if(menu[i] - num < 'A') {
            newWord = 'Z' - ('A' - (menu[i] - num) - 1);
        } else {
            newWord = menu[i] - num;
        }

            cout<< newWord;
    }
  
  return 0;
}