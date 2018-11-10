#include<iostream>
using namespace std;

int main(){
  int
    data[5] = {1,2,5,8,10},
    total = 0;
  for (int count : data) {
    cout << data[count] << endl;
  }
  cout << total << endl;
}
