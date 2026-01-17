// 1
//   if Statement 
// #include <iostream>
// using namespace std;
//  int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (cin.fail()) {
//         cout << "Invalid input. Please enter a number." << endl;
//         return 1;
//     }
//     if (num > 0) {
//         cout << "The number is positive." << endl;
//     } else if (num < 0) {
//         cout << "The number is negative." << endl;
//     } else {
//         cout << "The number is zero." << endl;
//     }
//     return 0;
// }

//2
//  #include <iostream>
// using namespace std;
//  int main(){
//     int num;
//     if (num < 0) 
//         cout << " the number is greater than 0" << endl;
//     else
//     cout << " the number is less than 0" << endl;
//     return 0;
//  }

// 3.
// #include <iostream>
// using namespace std;
//  int main(){    
//     int marks;
//     cout << "Enter your marks: ";
//     cin >> marks;

//     if (marks >= 90) {
//         cout << "Grade: A" << endl;
//     } else if (marks >= 80) {
//         cout << "Grade: B" << endl;
//     } else if (marks >= 70) {
//         cout << "Grade: C" << endl;
//     } else if (marks >= 60) {
//         cout << "Grade: D" << endl;
//     } else {
//         cout << "Grade: F" << endl;
//     }
//     return 0;
//  }

// 4. using switch statement
// #include <iostream>
// using namespace std;
//  int main(){    
//     int marks;
//     cout << "Enter your marks: ";
//     cin >> marks;   
//     switch (marks / 10) {
//         case 10:
//         case 9:
//             cout << "Grade: A" << endl;
//             break;
//         case 8:
//             cout << "Grade: B" << endl;
//             break;
//         case 7:
//             cout << "Grade: C" << endl;
//             break;
//         case 6:
//             cout << "Grade: D" << endl;
//             break;
//         default:
//             cout << "Grade: F" << endl;
//             break;
//     }
//     return 0;
// }

// 5 using switch case for enter the mark 
// #include <iostream> 
// using namespace std; 
//  int main(){    
//     char grade;
//     cout << "Enter your grade (A, B, C, D, F): ";
//     cin >> grade;   
//     switch (grade) {
//         case 'A':
//             cout << "Excellent!" << endl;
//             break;
//         case 'B':
//             cout << "Well done!" << endl;
//             break;
//         case 'C':
//             cout << "Good!" << endl;
//             break;
//         case 'D':
//             cout << "You passed." << endl;
//             break;
//         case 'F':
//             cout << "Better try again." << endl;
//             break;
//         default:
//             cout << "Invalid grade entered." << endl;
//             break;
//     }
//     return 0;
//  }

// 6 
// #include <iostream>
// using namespace std;
//     int main(){
//     int number;
//     cout << "Enter an integer: ";
//     cin >> number;  
//     if (number > 0) {
//         cout << number << " is positive." << endl;
//     } else if (number < 0) {
//         cout << number << " is negative." << endl;
//     } else {
//         cout << "The number is zero." << endl;
//     }
//     if (number % 2 == 0) {
//         cout << number << " is even." << endl;
//     } else {
//         cout << number << " is odd." << endl;
//     }
//     return 0;
    
// 7
// #include <iostream>
// #include <cstdlib> // for rand() and srand()
// #include <ctime>   // for time()
// using namespace std;
// int main() {
//     srand(time(0));
//     int number = rand() % 10; 
//     cout << "Random number: " << number << endl;
//     return 0;
// }

// 8
// #include <iostream>
// using namespace std;
//  int main(){    
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;   
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         cout << year << " is a leap year." << endl;
//     } else {
//         cout << year << " is not a leap year." << endl;
//     }
//     return 0;
//  }

// #include <iostream>
// using namespace
// int main ()
// {
// char ch;
// cout << "enter the character;"
// cin >> ch;
// // count << the ASCII
//  char next = ch + 1;
//  cout << "the next character after "<< ch  << "is"<< next<< "and its ASCII value is:"<<int (next) << endl;

// // display uppercase letter (A-Z) using rand function
// #include <iostream>
// using namespace std;
// int main (){
//     srand (time (0));
//     char uppercase = 'A' + rand() % 26;
//     cout << "Random uppercase letter: " << uppercase << endl;
//     return 0;
// }

//  hexadecial to decimal value in simple code

#include <iostream>
using namespace std;

int hexToDecimal(string hex)
{
    int decimal = 0;

    for (int i = 0; i < hex.length(); i++)
    {
        char ch = hex[i];
        int value;
        if (ch >= '0' && ch <= '9')
            value = ch - '0';
        else if (ch >= 'A' && ch <= 'F')
            value = ch - 'A' + 10;
        else if (ch >= 'a' && ch <= 'f')
            value = ch - 'a' + 10;
        else
        {
            cout << "Invalid Hexadecimal number!";
            return -1;
        }
        decimal = decimal * 16 + value;
    }

    return decimal;
}
