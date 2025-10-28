#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    string name, courseName, locationName;
    bool isPau;
    int courseChoice, locationChoice;
    int days = 0, regFee = 0, lodgingPerDay = 0;
    double lodgingCost, total, regDiscount = 0, lodgingDiscount = 0, promo = 0;

    // --- INPUT ---
    cout << "Enter full name: ";
    getline(cin, name);
    cout << "Is PAU student? (1=true, 0=false): ";
    cin >> isPau;
    cout << "Enter course (1-5): ";
    cin >> courseChoice;
    cout << "Enter location (1-5): ";
    cin >> locationChoice;

    // --- COURSE SELECTION (multi-way if-else) ---
    if (courseChoice == 1) {
        courseName = "Photography";
        days = 3;
        regFee = 10000;
    } 
    else if (courseChoice == 2) {
        courseName = "Painting";
        days = 5;
        regFee = 8000;
    } 
    else if (courseChoice == 3) {
        courseName = "Fish Farming";
        days = 7;
        regFee = 15000;
    } 
    else if (courseChoice == 4) {
        courseName = "Baking";
        days = 5;
        regFee = 13000;
    } 
    else if (courseChoice == 5) {
        courseName = "Public Speaking";
        days = 2;
        regFee = 5000;
    } 
    else {
        cout << "Invalid course choice!\n";
        return 0;
    }

    // --- LOCATION SELECTION (multi-way if-else) ---
    if (locationChoice == 1) {
        locationName = "Camp House A";
        lodgingPerDay = 10000;
    } 
    else if (locationChoice == 2) {
        locationName = "Camp House B";
        lodgingPerDay = 2500;
    } 
    else if (locationChoice == 3) {
        locationName = "Camp House C";
        lodgingPerDay = 5000;
    } 
    else if (locationChoice == 4) {
        locationName = "Camp House D";
        lodgingPerDay = 13000;
    } 
    else if (locationChoice == 5) {
        locationName = "Camp House E";
        lodgingPerDay = 5000;
    } 
    else {
        cout << "Invalid location choice!\n";
        return 0;
    }

    // --- COMPUTE COSTS ---
    lodgingCost = lodgingPerDay * days;
    total = regFee + lodgingCost;

    // --- DISCOUNT RULES ---
    // Lodging discount: 5% if PAU student AND location is A or B
    if (isPau && (locationChoice == 1 || locationChoice == 2)) {
        lodgingDiscount = 0.05 * lodgingCost;
        lodgingCost -= lodgingDiscount;
    }

    // Registration discount: 3% if days > 5 OR regFee > 12000
    if ((days > 5) || (regFee > 12000)) {
        regDiscount = 0.03 * regFee;
        regFee -= regDiscount;
    }

    // --- RANDOM BONUS ---
    srand(time(0));
    int r = rand() % 100 + 1;  // random number 1–100
    if (r == 7 || r == 77) {
        promo = 500;
        total = regFee + lodgingCost - promo;
    } else {
        total = regFee + lodgingCost;
    }

    // --- OUTPUT ---
    cout << "\n--- REGISTRATION SUMMARY ---\n";
    cout << "Name: " << name << "   (PAU student: " << (isPau ? "Yes" : "No") << ")\n";
    cout << "Course: " << courseName << "   Days: " << days << endl;
    cout << "Registration: ₦" << regFee 
         << "  (reg discount: ₦" << regDiscount << ")\n";
    cout << "Lodging: ₦" << lodgingPerDay << " × " << days
         << " = ₦" << lodgingPerDay * days
         << "  (lodging discount: ₦" << lodgingDiscount << ")\n";
    cout << "Random draw: " << r 
         << "  Promo applied: ₦" << promo << endl;
    cout << "TOTAL: ₦" << total << endl;

    return 0;
}
