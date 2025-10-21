#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, hypotenuse;

    cout << "Enter opposite: ";
    cin >> num1;

    cout << "Enter adjacent: ";
    cin >> num2;

    hypotenuse = sqrt((num1 * num1) + (num2 * num2));

    cout << "The hypotenuse is: " << hypotenuse << endl;
    return 0;
}
