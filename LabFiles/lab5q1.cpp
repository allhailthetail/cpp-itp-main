/*
//question 1 exercise 1
//This program tests whether or not an initalized value
//is equal to a value input by the user
//Matthew Younger
#include<iostream>
using namespace std;

int main(){
  //initalize variables
  int num1, //num1 is not initalized
  num2 = 5; //num2 has been initialized to 5

  cout << "Please enter an integer" << endl;
  cin >> num1;

  cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

  //fixed the if statement.  was if (num1 = num2) -- incorrect, as this was
  //an assignment statement in an if statement.  Not good.
  //pogram now works correctly.
  if (num1 == num2)
    cout << "Hey, that's a coincidence!!" << endl;

  if (num1 != num2)
    cout << "The values are not the same!" << endl;


  return 0;
}
*/

/*
//question 1 exercise 2 & 3
//This program tests whether or not two user-provided vaules
//are equal, and displays the result
//Matthew Younger
#include<iostream>
using namespace std;

int main(){
  //initalize variables
  int num1, num2; //neither value is initalized

  //prompt & gather user input
  cout << "Please enter the first integer" << endl;
  cin >> num1;
  cout << "Please enter the second integer" << endl;
  cin >> num2;

  //display the values entered.
  cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

  //if statements determine if the two numbers match or not
  //outputs result
  if (num1 == num2)
    cout << "The values are the same." << endl;
    cout << "Hey, that's a coincidence!" << endl;

  if (num1 != num2)
    cout << "Uh, those values are not the same." << endl;


  return 0;
}
*/

//question 1 exercise 4
//This program tests whether or not two user-provided vaules
//are equal
//uses only one if statement...
//Matthew Younger
#include<iostream>
using namespace std;

int main(){
  //initalize variables
  int num1, num2; //neither value is initalized

  //prompt & gather user input
  cout << "Please enter the first integer" << endl;
  cin >> num1;
  cout << "Please enter the second integer" << endl;
  cin >> num2;

  //display the values entered.
  cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

  //if statements determine if the two numbers match or not
  //outputs result
  if (num1 == num2){
    cout << "The values are the same." << endl;
    cout << "Hey, that's a coincidence!" << endl;}
    else cout << "Uh, those values are not the same.";



  return 0;
}
