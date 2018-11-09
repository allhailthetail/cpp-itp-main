/*
Program looks for number 10
and returns the index of the array where it was found
*/
#include<iostream>
using namespace std;
int main() {
  int a[] = {0, 1, 5, 10, 8};
  int item = 10;
  int index = -1;
  bool found = false;
  int arraySize = sizeof(a) / sizeof(a[0]);
  for (size_t i = 0; i < arraySize; i++) {
    if (a[i] == item) {
      found = true;
      index = i;
      break;
    }
  }
  cout << index << '\n';
}
