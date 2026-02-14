#include <iostream>

#include <fstream>

using namespace std;

int main() {
  ofstream file;
  string n;

//   cin >> n;
getline(cin, n);
  file.open("sample.txt", ios::app);
  if(file.is_open()){
    file << n << endl;

  }

  file.close();
    return 0;
}
