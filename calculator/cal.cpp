#include <iostream>
using namespace std;

float addition(float num1, float num2) {
    return num1 + num2;
}

float multiplication(float num1, float num2) {
    return num1 * num2;
}

float division(float num1, float num2) {
    if (num1 == 0 || num2 == 0) {
        cout << "Division by zero not allowed";
        return 0;
    }

    if (num1 > num2)
        return num1 / num2;
    else
        return num2 / num1;
}


int main() {

cout << division(3, 15);
    return 0;
}
