/*
assignment1.cpp

Question #1:
- Question #1: -
- program creation process:
- The standard programming process is to design, create, test, and debug a given program.
- Design:
• Clearly define the purpose, input, process, and output of the program.
- Draw pictures, graphs, illustrations, etc.
- Utilize pseudocode to make the initial process easier to plan out.
 
- Also can use plain english and flowcharts if this is confusing, then write the pseudocode. • Check for logical errors
- Transcribe the pseudocode into a well written (c++) source code file.
- Verify the necessary libraries are being utilized
- Analyze the code and verify its efficiency
• are the variable names coherent?
• are the equations efficient? Compile source code & test:
- correct errors during compilation
• prevents a binary file from being created completely
- correct runtime errors
• source code compiles, but program does not run correctly
• “Desk checking”
- Track the value of variables. Do they change & update as expected?
- Incorrect logic in your equations?
1. Incorrect program operation/result given flowchart, pseudocode, and other visual tools? - Validate program results:
• Use test data and compare to your own logic. Do they agree? - Why or why not?
• Use more complicated real-world data. Does your program have unintended limitations? - Does it break easily?

Question #2a:

\\names.cpp

\\prints a list of student names with their hometowns & intended major



#include<iostream>
using namespace std;

int main()
{
  //prints the list
  cout << endl;
  cout << "\tName\t\tHometown\t\tIntended Major" << endl;
  cout << "\t====\t\t========\t\t==============" << endl;
  cout << "\tSally\t\tRoanoke\t\t\tEnglish" << endl;
  cout << "\tAlexander\tWashington\t\tEconomics" << endl;
  cout << "\tMatthew\t\tElbert\t\t\tElectrical Eng" << endl;
  cout << "\tAlbert\t\tUlm\t\t\tPhysics" << endl;
  cout << "\tClaude\t\tParis\t\t\tArt" << endl;
  cout << endl;

  return 0;
}

Question #2b:

names.cpp

prints a list of student names with their hometowns & intended major


#include<iostream>
using namespace std;

int main()
{
  //prints the list
  cout << endl;
  cout << "\tName\t\tHometown\t\tIntended Major" << endl;
  cout << "\t====\t\t========\t\t==============" << endl;
  cout << "\tSally\t\tRoanoke\t\t\tEnglish" << endl;
  cout << "\tAlexander\tWashington\t\tEconomics" << endl;
  cout << "\tMatthew\t\tElbert\t\t\tElectrical Eng" << endl;
  cout << "\tAlbert\t\tUlm\t\t\tPhysics" << endl;
  cout << "\tClaude\t\tParis\t\t\tArt" << endl;
  cout << endl;

  return 0;
}
*/

//------------------------------------------------------

/*
a1q3.cpp
Matthew Younger

program gathers weight of user in feet and inches, then calculates
ideal weight based on assumed constants.
*/

#include<iostream>
using namespace std;

int main()
{
  //define variables
  const int femConst = 5, maleConst = 6;
  double femWeight, maleWeight, height_ft, height_in;

  //gather user data
  cout << "Please provide your height, providing feet first:\n";
  cin >> height_ft;
  cout << "Please provide remainin height in inches:\n";
  cin >> height_in;

  //perform computations
  //convert height to inches only and compute how many inches above
  // 5 feet (60") they are
  height_in += 12 * height_ft - 60;
  //calculate appropriate weights
  femWeight = 100 + femConst * height_in;
  maleWeight = 106 + maleConst * height_in;

  //print results
  cout << "If you are a female, you should weigh: \t" << femWeight << endl;
  cout << "If you are a male, you should weigh: \t" << maleWeight << endl;
  cout << "Provided that you're " << height_in << " Inches Tall." << endl;

return 0;

}
