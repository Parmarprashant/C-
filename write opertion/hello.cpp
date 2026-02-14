#include <iostream>

#include <fstream>

using namespace std;

int main() {
  ofstream file;

  file.open("sample.txt", ios::app);
  if(file.is_open()){
    file << "second time using file operation" << endl;

  }

  file.close();
    return 0;
}
