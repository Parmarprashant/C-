#include <iostream>

#include <fstream>

using namespace std;

int main() {
    string onelinestatement;
  ifstream file1;

  file1.open("sample.txt");
  if(file1.is_open()){
     cout<< "added:- " <<endl;

  while(getline(file1, onelinestatement)){
    cout<< onelinestatement << endl;
  }

  }

  file1.close();
    return 0;
}
