// 1. Factorial using recursion
// #include <iostream>
// using namespace std;
// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main() {
//     int num;
//     cout << "Enter a Factorial integer: ";
//     cin >> num;  
//     if (num < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     } else {
//         cout << "Factorial of " << num << " = " << factorial(num) << endl;
//     }
//     return 0;
// }

 
// #include <iostream>
// using namespace std;
// double sumSeries(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return n + sumSeries(n - 1);
// }
// int main() {
//     int terms;
//     cout << "Enter the number of terms to sum: ";
//     cin >> terms;  
//     if (terms < 0) {
//         cout << "Number of terms cannot be negative." << endl;
//     } else {
//         cout << "Sum of series up to " << terms << " = " << sumSeries(terms) << endl;
//     }
//     return 0;
// }

// 3.summing a series using recursion 
// #include <iostream>
// using namespace std;
// double sumSeries(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return n + sumSeries(n - 1);
// }
// int main() {
//     int terms;
//     cout << "Enter the number of terms to sum: ";
//     cin >> terms;  
//     if (terms < 0) {
//         cout << "Number of terms cannot be negative." << endl;
//     } else {
//         cout << "Sum of series up to " << terms << " = " << sumSeries(terms) << endl;
//     }
//     return 0;
// }

// 4. tower of Hanoi
// #include <iostream>
// using namespace std;

// void tower_of_hanoi(int n, char source, char destination, char auxiliary) {
//     if (n == 1) {
//         cout << "Move disk 1 from " << source << " to " << destination << endl;
//         return;
//     }
//     tower_of_hanoi(n - 1, source, auxiliary, destination);
//     cout << "Move disk " << n << " from " << source << " to " << destination << endl;
//     tower_of_hanoi(n - 1, auxiliary, destination, source);
// }

// int main() {
//     int n = 3;
//     tower_of_hanoi(n, 'A', 'C', 'B');
//     return 0;
// }

// bool isPalindrome(const char * const s)
// {
//     if (strlen(s) <= 1) // Base case
//         return true;
//     else if (s[0] != s[strlen(s) - 1]) // Base case
//         return false;
//     else
//         return isPalindrome(substring(s, 1, strlen(s) - 2));
// }

// }


// {
//     if (n == 0) // Base case
//         return 1;
//     else
//         return n * factorial(n - 1); // Recursive call
// }


//    Here is the thing: the answer totally depends on what ‘n’ equals. However, we can see the pattern used: 
// •	Start count = 5
// •	Each iteration increases by 3
// •	Loop continues while count < n
//      So, the sequence goes: 5, 8, 11, 14, 17, 20, and so on. 
//      The number of iterations = [(n - 5)/3]
//      For example,
// •	If n = 10: count goes 5 => 8 => 11. Two iterations
// •	If n = 15: count goes 5 => 8 => 11 => 14 = > 17. Four iterations.

// #include <stdio.h>

// void printNumbers(int n) {
//     if (n == 0) {
//         return; 
//     }
//     printNumbers(n - 1);  
//     printf("%d ", n);    
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     printNumbers(n);
//     return 0;
// }

// #include <stdio.h>

// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;   // base case
//     } else {
//         return n * factorial(n - 1);  // recursive call
//     }
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Factorial of %d is %d\n", num, factorial(num));

//     return 0;
// }

// #include <stdio.h>

// int sumOfDigits(int n) {
//     if (n == 0) {
//         return 0;   
//     } else {
//         return (n % 10) + sumOfDigits(n / 10); 
//     }
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Sum of digits is %d\n", sumOfDigits(num));

//     return 0;
// }


// #include <stdio.h>

// void printArray(int arr[], int size, int index) {
//     if (index == size) {
//         return;   // base case
//     }

//     printf("%d ", arr[index]);
//     printArray(arr, size, index + 1);   // recursive call
// }

// int main() {
//     int n;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter array elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printArray(arr, n, 0);

//     return 0;
// }

// #include <stdio.h>

// int power(int a, int b, int result) {
//     if (b == 0) {
//         return result;   // base case
//     } else {
//         return power(a, b - 1, result * a);  // tail-recursive call
//     }
// }

// int main() {
//     int a, b;

//     printf("Enter base and exponent: ");
//     scanf("%d %d", &a, &b);

//     printf("%d\n", power(a, b, 1));

//     return 0;
// }

// #include <stdio.h>

// int fibTail(int n, int a, int b) {
//     if (n == 0) {
//         return a;  
//     }
//     return fibTail(n - 1, b, a + b);   
// }

// int main() {
//     int n;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("%d\n", fibTail(n, 0, 1));

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// void reverseString(char str[], int start, int end) {
//     char temp;

//     if (start >= end) {
//         return;   
//     }

//     temp = str[start];
//     str[start] = str[end];
//     str[end] = temp;

//     reverseString(str, start + 1, end - 1);  
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     scanf("%s", str);

//     reverseString(str, 0, strlen(str) - 1);

//     printf("%s\n", str);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1; 
    }

    if (str[start] != str[end]) {
        return 0; 
    }

    return isPalindrome(str, start + 1, end - 1); 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
