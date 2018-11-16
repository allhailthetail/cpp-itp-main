/*
This program demonstrates the use
of methods in pogramming.  This is a very
powerful technique that is the stepping-stone to
great things.

you can specify void, int, string, etc...
if not using void, then be sure to include a return
line, just like the main function, just specify the
variable or whatever to return, instead of just using 0.
*/
#include<iostream>
void PrintStars(int n) {
  for (size_t i = 0; i < n; i++) {
    std::cout << "*";
  }
}
int main(){
  int i;
  std::cin >> i;
  PrintStars(i);
  return 0;
}
