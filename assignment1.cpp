// #include <iostream>
// using namespace std;

// int main() {

//     int baseSalary = 50000;
//     const double BONUS_PERCENTAGE = 10.5;

//     double bonusAmount = baseSalary * (BONUS_PERCENTAGE / 100);

//     double totalSalary = baseSalary + bonusAmount;
//     cout << "Total Salary: " << totalSalary << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    
    const double MULTIPLIER = 9.0;
    const double DIVISOR = 5.0;
    const double OFFSET = 32.0;

    double celsius;
    cout << "Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * MULTIPLIER / DIVISOR) + OFFSET;
    cout << "Fahrenheit: " << fahrenheit << endl; 

    return 0;
}
