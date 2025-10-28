#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number1, number2, answer, temp;
    
    srand(time(0));

    number1 = rand() % 10;
    number2 = rand() % 10;
    if (number1 < number2) {
        temp = number1;
        number1 = number2;
        number2 = temp;
    }

    cout << "What is " << number1 << " - " << number2 << "? ";
    cin >> answer;
    if (answer == (number1 - number2))
        cout << "Correct!" << endl;
    else
        cout << "Wrong. The correct answer is " << (number1 - number2) << endl;

    return 0;
}
