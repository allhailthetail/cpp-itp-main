/*
The ".h" file is the declaration...
*/

#pragma once                    //ensures definition only occurs once
#include<iostream>              //seems to be necessary... ?
class Test{
public:
  void newNumber();
  void printNumber();
  Test();                       //default constructor
private:
    int someNumber;             //number is declared privately, encapsulation
};                              //semicolon is needed at the end...
