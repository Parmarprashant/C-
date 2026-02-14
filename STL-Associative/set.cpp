#include <iostream>
#include <set>

using namespace std;


int main(){

     set<int> n = {1,4,4,2,3};
     for(int value: n){
        cout<< value<<" ";
     }
  cout<< endl;

  n.insert(54);
  n.insert(42);

  for(int value: n){
        cout<< value<<" ";
     }

     cout<< endl;

      n.erase(42);

  for(int value: n){
        cout<< value<<" ";
     }

     cout<< endl;

    auto it = n.find(54);

    if(it != n.end()){   // run to till the end index
    cout<< "found: " << *it<< endl;
    }
    else{
        cout<< "not found"<<endl;
    }

    return 0;

}