/*
The function declarations are in the "Test.cpp file,
which links to the declarations, which is why
we don't need to define 'someNumber', because it
already has been declared and c++ is expecting it.
*/

#include<iostream>
#include"Test.h"

Test::Test(){
  someNumber = 4009;
}

void Test::newNumber(){
  int num;
  std::cout << "Please Enter New Number: ";
  std::cin >> num;

  someNumber = num;
}

void Test::printNumber(){
  std::cout << someNumber << '\n';
};
