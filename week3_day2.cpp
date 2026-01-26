// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = n; i >= 1; i--) {      // rows
//         for (int j = 1; j <= i; j++) {  // stars
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {          // rows
//         for (int j = 1; j <= i; j++) {      // numbers
//             cout << j;
//         }
//         cout << endl;                       // next line
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {           // rows
//         for (int j = 0; j < i; j++) {        // columns
//             cout << char('A' + j) << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         // Print spaces
//         for (int space = 1; space <= n - i; space++) {
//             cout << " ";
//         }

//         // Print stars
//         for (int star = 1; star <= 2 * i - 1; star++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = n; i >= 1; i--) {
//         // Print spaces
//         for (int space = 0; space < n - i; space++) {
//             cout << " ";
//         }

//         // Print stars
//         for (int star = 1; star <= 2 * i - 1; star++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     // Upper half (full pyramid)
//     for (int i = 1; i <= n; i++) {
//         // Print spaces
//         for (int space = 1; space <= n - i; space++) {
//             cout << " ";
//         }

//         // Print stars
//         for (int star = 1; star <= 2 * i - 1; star++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     // Lower half (inverted pyramid)
//     for (int i = n - 1; i >= 1; i--) {
//         // Print spaces
//         for (int space = 1; space <= n - i; space++) {
//             cout << " ";
//         }

//         // Print stars
//         for (int star = 1; star <= 2 * i - 1; star++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  // size of the square

//     for (int i = 1; i <= n; i++) {         // rows
//         for (int j = 1; j <= n; j++) {     // columns
//             // Print star for borders, space for inside
//             if (i == 1 || i == n || j == 1 || j == n) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
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

    int arr[50][50]; // 2D array to store Pascal's triangle

    for (int i = 0; i < n; i++) {
        // Print leading spaces for pyramid shape
        for (int s = 0; s < n - i - 1; s++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1; // First and last element of each row is 1
            } else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j]; // sum of two numbers above
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}






