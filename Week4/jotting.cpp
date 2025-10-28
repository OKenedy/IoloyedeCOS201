#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int seed = time(0);
    srand(seed); 
    cout << rand() % 10;
    return 0;
}
