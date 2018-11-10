#include<iostream>
#include<fstream>     //allows read/write to file...
using namespace std;

int main(){
  ofstream outputFile;
  outputFile.open("demofile.txt");

  cout << "Now Writing Data to File..." << endl;

  outputFile  << "Bach." << '\n'
              << "Beethoven." << '\n'
              << "Motzhart." << '\n'
              ;
}
