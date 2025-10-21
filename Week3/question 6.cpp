#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Enter current account balance: ";
    cin >> num1;

    cout << "Enter interest rate: ";
    cin >> num2;

    num3 = ((num1 * num2 * 2)/100);
    num3 = num3 + 6000;

    cout << "Balance after two year: " << num3 << endl;

    return 0;
}