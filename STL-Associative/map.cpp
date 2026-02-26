#include <iostream>
#include <map>
#include <string.h>
using namespace std;


int main(){

     map <int, string> n;
     n[3] = "prashant";
     n[2] = "samir saheb";

     for(auto& [key, value]: n){
        cout<< key <<" " << value<<endl;
     }
  cout<< endl;


    return 0;

}

