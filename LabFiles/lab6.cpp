
/*
//step 1,2
//Lab 4 petTag.cpp
//this program determines the fee for a cat or dog pet petTag
//it uses nested if/else statements
//Matthew Younger
#include<iostream>
using namespace std;

int main(){

  string pet; // cat or dog
  char spayed; //y or n

  //determine if the pet information
  cout << "Enter the pet type (cat or dog): ";
  cin >> pet;
  cout << "Has the pet been spayed or neutered (y/n): ";
  cin >> spayed;

  //determine the pet tag fee
  if (pet == "cat")
  { if (spayed == 'y')
      cout << "Fee is $4.00 \n";
      else
        cout << "Fee is $8.00 \n";
  }
  else if (pet == "dog")
  { if (spayed =='y')
      cout << "Fee is $6.00 \n";
    else
      cout << "Fee is $12.00 \n";
  }
  else
    cout << "Only cats and dogs need pet tags. \n";

  return 0;
}
*/


//step 3,4
//Lab 4 petTag.cpp
//this program determines the fee for a cat or dog pet petTag
//it uses nested if/else statements
//Matthew Younger
#include<iostream>
using namespace std;

int main(){

  string pet; // cat or dog
  char spayed; //y or n

  //get pet type
  //while loop only accepts cat or dog and loops until entered correctly.
  //local variable declaration
  int i = 0;
  while (i < 1){
    cout << "Enter the pet type (cat or dog): ";
    cin >> pet;
    if (pet == "cat" || pet == "dog")
      i++;
      else
        cout << "Animal must be either a 'cat' or 'dog'... \n\n";
  }

  //determine if the pet has been spayed or neutered
  cout << "Has the pet been spayed or neutered (y/n): ";
  cin >> spayed;

  //determine the pet tag fee
  //added logical || to allow for captial & lowercase Y/N, y/n
  if (pet == "cat")
  { if (spayed == 'y' || spayed == 'Y')
      cout << "Fee is $4.00 \n";
      else
        cout << "Fee is $8.00 \n";
  }
  else if (pet == "dog")
  { if (spayed =='y' || spayed == 'Y')
      cout << "Fee is $6.00 \n";
    else
      cout << "Fee is $12.00 \n";
  }
  else
    cout << "Only cats and dogs need pet tags. \n";

return 0;
}
