/*
Matthew Younger
lab17.cpp

Pre-Lab Questions:

1.  A class constructor is a unique class member function that is
    automatically called when a class is 'instantiated.'
2.  Constructors are different because they must have the same name as
    the class they are assigned to, and constructors have no
    return type.
3.  Declaring things inside a class as public is necessary when those items
    will be used outside the class.  Likewise, classes keep all items
    private, unless specified otherwise.  In this way, data encapsulation
    makes object-oriented programming so powerful.
4, 5, 6?
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class BankAccount
{
private:
  double balance;
  int accountNumber;
  double interestRate;
  string ownerName;

public:
  BankAccount();  //default constructor
  BankAccount(double, double, int, string); //overlaoded...
  double getBalance();
  void deposit(double);
  void withdraw(double);
  void addInterest();
  void displayAccountSummary();
  //~BankAccount(); //desructor...  Not required for this lab?
};

BankAccount::BankAccount(){ //default constructor...
  balance = 0;
  accountNumber = 0;
  interestRate = 0;
  ownerName = "John Doe";
}

BankAccount::BankAccount(double bal, double interest, //overloaded consrctor...
      int acct, string name){
  balance = bal;
  accountNumber = acct;
  interestRate = interest;
  ownerName = name;
}
double BankAccount::getBalance(){
  return balance;
}

void BankAccount::deposit(double deposit){
  //adds deposit ammount to balance...
  balance += deposit;
}

void BankAccount::withdraw(double withdraw){
  //subtracts withdraw from balance...
  balance -= withdraw;
}

void BankAccount::addInterest(){
  double interest;
  cout << "What's the interest rate in percent??" << '\n';
  cin >> interest;
  //convert interest to decimal...
  interest /= 100;
  interestRate = interest;
}

void BankAccount::displayAccountSummary(){
  cout  << "\n\n"
        << "Account Number: " << accountNumber << '\n'
        << "Owner's Name:   " << ownerName     << '\n'
        ;
  cout  << fixed << setprecision(2)
        << "Balance:        " << balance       << '\n'
        << "Interest Rate:  " << interestRate * 100 << "%" << '\n';
        ;
}

//begin main program:
int main(){

  //call the overload constructor and assign values
  BankAccount myAccount(1000.50, 0.05, 1111, "John William");

  //call deposit method
  myAccount.deposit(500);

  //call withdraw method
  myAccount.withdraw(200);

  //call interest method, if needed...
  //myAccount.addInterest();

  //call displayAccountSummary method at the end of the program...
  myAccount.displayAccountSummary();

  return 0;
}
