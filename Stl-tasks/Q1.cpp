#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> n;
    int num;

    for (int i = 1; i <= 5; i++) {
        cin >> num;
        n.push_back(num);
    }

    sort(n.begin(), n.end());
    reverse(n.begin(), n.end());

    for (int i = 0; i < n.size(); i++) {
        cout << n[i] << " ";
    }

    return 0;
}