#include <iostream>
#include <list>

using namespace std;

int main(){

   list<int> l1 = {1,2,3,4,5};
   //iteration
   for(int value: l1){
    cout<< value<< " ";
   }

   cout<< endl;

   l1.push_back(12);
   for(int value: l1){
    cout<< value<< " ";
   }

      cout<< endl;

   l1.pop_back();
   for(int value: l1){
    cout<< value<< " ";
   }


   cout<< endl;

   l1.push_front(12);
   for(int value: l1){
    cout<< value<< " ";
   }

   cout<< endl;

   // l1.insert(l1.begin()+1, 13);
   // for(int value: l1){
   //  cout<< value<< " ";
   // }

l1.reverse();
 for(int value: l1){
    cout<< value<< " ";
   }
    return 0;
}