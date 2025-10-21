#include <iostream>
using namespace std;

int main() {
    double totalAmount, salesTax, finalAmount;

    cout << "Enter the total purchase amount: ";
    cin >> totalAmount;

    salesTax = totalAmount * 0.06;
    finalAmount = totalAmount + salesTax;

    cout << "Sales Tax (6%): " << salesTax << endl;
    cout << "Total Amount with Tax: " << finalAmount << endl;

    return 0;
}
