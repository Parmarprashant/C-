#include <iostream>
#include <vector>
using namespace std;

int main(){

   vector<int> n;
   int num = 10;
   cout << "enter the elements:- ";
   for(int i =1; i<=num; i++){
    int value;
    cin>> value;
    n.push_back(value);
   }

  for(int j =0; j<=n.size(); j++){
    if(j%2 ==0){
        n.erase(n.begin() + j);
    }
   
  }
  
  cout<< endl;
  
  cout<< "size:- " << n.size() << endl;
  
 for(int check: n){
     cout<< check << " ";
 }
  

    return 0;
}