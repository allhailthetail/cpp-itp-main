#include<iostream>
#include<iomanip>
using namespace std;

void dayPrint(){
  int offset = 5;
  //int counter = 1;
  int max = 20;

  for (size_t counter = 1; counter < max; counter++) {
    if (offset > counter) {
      cout << setw(10) << " ";
      --offset;
    } else cout << setw(10) << "+";
  }
}

int main(){
  dayPrint();
}
