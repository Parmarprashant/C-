#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   vector<int> arr;

   int s, n;
   cout << "Enter the size of arr";
   cin>> n;

   for(int i =1; i<=n; i++){
    cin>> s;
    arr.push_back(s);
   }

   cout << endl;

   sort(arr.begin(), arr.end());

     for(int val : arr){
     cout<< val << " ";
   }
   cout << endl;
   
   reverse(arr.begin(), arr.end());

  for(int val : arr){
     cout<< val << " ";
   }
   cout << endl;

    return 0;
}
