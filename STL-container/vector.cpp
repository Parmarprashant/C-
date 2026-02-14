
#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<int> v = {4,2,3,4};
v.push_back(12);
for(int value: v){
    cout<< value <<" ";
}
cout << endl;
v.pop_back();

for(int value: v){
    cout<< value <<" ";
}

cout << endl;

v.insert(v.begin() +2, 60);
for(int value: v){
    cout<< value <<" ";
}

cout<< endl;


 v.erase(v.begin() +2);
 for(int value: v){
    cout<< value <<" ";
}

cout<< endl;
v.clear();
cout<< v.size();

cout<< endl;


cout << v.front();
    return 0;
}