/*
To get this bitch up and running:

g++ -o program *.cpp

This little script patches everything together and makes
a continuous file named program...
*/

#include<iostream>
#include"Test.h"

int main(){
  Test object1;

  object1.printNumber();
  object1.newNumber();
  object1.printNumber();

  return 0;
}
