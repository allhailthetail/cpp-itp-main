#include<iostream>
using namespace std;

int main(){
  int sum = 0, num = 0;

  cin >> num;
  while (num !=999){
    if (num < 0) {
      cout << "negative number" << '\n';
      cin >> num;
      continue;
    }
  sum += num;
  cin >> num;
  }

}
