#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    list<int> L1;

    for (int i = 1; i <= n; i++) {
        int value;
        cin >> value;
        L1.push_back(value);
    }

    cout << "List 1: ";
    for (int check : L1) {
        cout << check << " ";
    }
    cout << endl;

    int m;
    cin >> m;
    list<int> L2;

    for (int i = 1; i <= m; i++) {
        int value1;
        cin >> value1;
        L2.push_back(value1);
    }

    cout << "List 2: ";
    for (int check1 : L2) {
        cout << check1 << " ";
    }
    cout << endl;

  
    list<int> L3;
    L3.insert(L3.end(), L1.begin(), L1.end());
    L3.insert(L3.end(), L2.begin(), L2.end());

    cout << "Merged List: ";
    for (int merged : L3) {
        cout << merged << " ";
    }
    cout << endl;

    L3.sort();

    for(int checkL: L3){
        cout<< checkL <<" ";
    }

    return 0;
}