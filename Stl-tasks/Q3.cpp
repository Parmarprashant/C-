#include <iostream>
#include <deque>
using namespace std;

int main(){
     deque<string> word;

     int n;
     cout<< "Enter the number";
     cin>> n;



     for(int i =1; i<=n; i++){
        string value;
        cin >> value;
         word.push_back(value);
     }

     for(string check: word){
        cout<< check << " ";
     }

     

    return 0;

}