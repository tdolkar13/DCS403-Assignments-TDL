
// // 1. Program to calculate the sum of the first N natural numbers using a for loop

// // Input: number of terms
// #include <iostream>
// using namespace std;

// int main() {
//     // Initialize sum variable
//     int sum_of_numbers = 0;
//     int N;

//     // Input the number of terms
//     cout << "Enter the number of terms: ";
//     cin >> N;

//     // Loop to add numbers from 1 to N
//     for (int i = 1; i <= N; i++) {
//         sum_of_numbers += i;  // Add i to the sum
//     }

//     // Output the result
//     cout << "The sum of the first " << N << " natural numbers is: " << sum_of_numbers << endl;

//     return 0;
// }


// 2. 
// Program to display the multiplication table of a given number using a do-while loop
// #include <stdio.h>

// int main() {
//     int num, i = 1;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     do {
//         printf("%d x %d = %d\n", num, i, num * i);
//         i++;
//     } while (i <= 10);

//     return 0;
// }

// 3
// Program to reverse the digits of a number using a while loop

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     int reverse_num = 0;

//     while (num > 0) {
//         int digit = num % 10;       
//         reverse_num = reverse_num * 10 + digit;
//         num = num / 10;         
//     }

//     cout << "Reversed number: " << reverse_num << endl;

//     return 0;
// }

// 4
// #include <stdio.h>

// int main() {
//     int num, count = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     do {
//         count++;
//         num = num / 10;
//     } while (num != 0);

//     printf("Number of digits: %d\n", count);

//     return 0;
// }


// 5
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     long long factorial = 1; 
    
//     cout << "Enter an integer: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         factorial *= i;
//     }

//     cout << "Factorial of " << n << " is: " << factorial << endl;

//     return 0;
// }

// 6
// #include <iostream>
// using namespace std;

// int main() {
//     int rows;

//     cout << "Enter number of rows: ";
//     cin >> rows;

//     for (int i = 1; i <= rows; i++) {
      
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl; 
//     }

//     return 0;
// }


// 7
// #include <iostream>
// using namespace std;

// int main() {

//     for (int i = 1; i <= 10; i++) {
//         cout << "Multiplication Table of " << i << endl;

//         for (int j = 1; j <= 10; j++) {
//             cout << i << " x " << j << " = " << (i * j) << endl;
//         }

//         cout << endl; 
//     }

//     return 0;
// }


// 8

// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     int num = 1; 
//     cout << "Enter number of rows: ";
//     cin >> N;

//     for (int i = 1; i <= N; i++) {
    
//         for (int j = 1; j <= i; j++) {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl; 
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {      // rows
        for (int j = 1; j <= i; j++) {  // stars
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
