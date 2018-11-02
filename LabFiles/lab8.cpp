//lab8.cpp
//Matthew Younger

//Question 1:
/*
#include<iostream>
using namespace std;

int main(){
  int i, //loop control
    sum; //accumulator
    //Code is not correct.  sum variable is unused.  Lab needs correction.


    //Expected output:
    //1 3 5 7 9 11
    //After loop i = 11

    //Observed output:
    //1 3 5 7 9
    //After loop i = 11

    i = 1;
    while(i<10){
      cout << i << ' ';
      i += 2;
    }
    cout << "\nAfter loop i = " << i
    << endl << endl;


    //Expected output:
    //4 3 2 1
    //After loop i = 0
    //Observed output:
    //5 4 3 2 1
    //After loop i = 0

    i = 5;
    while(i > 0){
      cout << i-- << ' ';
    }
    cout << "\nAfter Loop i = " << i
    << endl << endl;

return 0;
}
*/

//Question 2 part a.
/*
#include<iostream>
using namespace std;
int main()
{
	int count = 1;
	const int LIMIT = 10;

	while (count <= LIMIT)
	{
		// *** Step 2: Change this line to output count before the phrase
    cout << "count = " << count << '\n'; //step 2 complete
		cout << "I love Computer Science!!\n"<<endl;
			// *** Step 1: Increment count (hint: use the ++ operator)
    count++; //step 1 complete.  incriment added
	}
	return 0;
}
*/
//Question 2 part b.
#include<iostream>
using namespace std;
int main()
{
	int count = 1, numTimes;

  //get number of times to print output
  cout << "How many times should this program loop? ";
  cin >> numTimes;
	while (count <= numTimes)
	{
		// *** Step 2: Change this line to output count before the phrase
    cout << "loop #" << count << '\n'; //step 2 complete
		cout << "I love Computer Science!!\n"<<endl;
			// *** Step 1: Increment count (hint: use the ++ operator)
    count++; //step 1 complete.  incriment added
	}
  //additional output added per lab...
  cout << "This loop was repeated/printed: " << numTimes << " times." << '\n';
	return 0;
}
