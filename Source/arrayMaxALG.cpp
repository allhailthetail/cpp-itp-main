#include<iostream>
using namespace std;

int main(){
  const int SIZE = 10;
  int arraySize[SIZE];
  int maxIndex = 0;

  //read data from keyboard:
  cout << "Input 10 Values:" << '\n';
  for (size_t i = 0; i < SIZE; i++) {
    cout << "Value: ";
    cin >> arraySize[i];
  }

  //finding maximum value in array
  for (size_t i = 0; i < SIZE; i++) {
    if (arraySize[maxIndex] < arraySize[i]) {
      maxIndex = i;
    }
  }

  //print max value
  cout << "Maximum Value:" << '\n' << arraySize[maxIndex] << '\n';
}
