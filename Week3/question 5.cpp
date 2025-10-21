#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Enter current account balance: ";
    cin >> num1;

    cout << "Enter annual interest rate: ";
    cin >> num2;

    num3 = ((num1 * num2 * 1)/100);
    num3 = num3 + 6000;

    cout << "Balance after one year: " << num3 << endl;

    return 0;
}