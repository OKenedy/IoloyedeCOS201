#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    if (x %5==0) {
        cout << "HiFive" << endl;
    }
    if (x %2==0) {
        cout << "HiEven" << endl;
    }
return 0;
}

