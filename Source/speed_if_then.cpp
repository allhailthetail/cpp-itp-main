#include<iostream>
#include<string>
using namespace std;

int main()
{
  int speed;

  //prompt for speed
  printf("%s\n", "Just how fast were you driving, lol?" );
  cin >> speed;

  //deterine if speed was too fast or was acceptable
  // pint result
  if (speed > 100) {
    printf("%s\n", "Looks like someone's getting a ticket...");
    printf("%s\n", "Appear in court Monday...");
  }
  else {
    printf("%s\n", "Looks like you'll be fine.");
  }

  return 0;
}
