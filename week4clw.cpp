// #include <iostream>
// #include <algorithm>

// using namespace std;
// void selectionSort (int arr[], int n){
//     int i, j, min_idx, temp;
//     for (i = 0; i < n-1; i++){
//         min_idx = i;
//         for ( int j = i+1; j < n; j++){
//             if (arr[j] < arr[min_idx]){
//                 min_idx = j;
//                 swap(arr[i], arr[min_idx]);
//             }

//         }

// #include <iostream>
// using namespace std;
//  void printMatrix(const int m[][4],int row){
//      for (int i = 0; i < row; i++){
//          for (int j = 0; j < 4; j++){
//              cout << m[i][j] << " ";
//          }
//          cout << endl;
//      }
//  }

//  int main(){
//     int matrix[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     printMatrix (matrix,3);
//     return 0;
    
   
//  }

// #include <iostream>
// using namespace std;

// void printMatrix(const int m[][4], int row) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << m[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int matrix[3][4];

//     cout << "Enter elements of 3x4 matrix:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "\nMatrix is:" << endl;
//     printMatrix(matrix, 3);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class ArrayAnalyzer {
// private:
//     double* data;
//     int arraySize;

// public:
//     // Constructor
//     ArrayAnalyzer(double inputArray[], int size) {
//         arraySize = size;
//         data = new double[arraySize];
//         for (int i = 0; i < arraySize; i++) {
//             data[i] = inputArray[i];
//         }
//     }

//     // Destructor
//     ~ArrayAnalyzer() {
//         delete[] data;
//     }
//     double findMinimum() {
//         if (arraySize <= 0) {
//             cout << "Error: No data!" << endl;
//             return 0.0;
//         }

//         double smallest = data[0];
//         for (int i = 1; i < arraySize; i++) {
//             if (data[i] < smallest) {
//                 smallest = data[i];
//             }
//         }
//         return smallest;
//     }
// };

// int main() {
//     double numbers[] = {3.7, 1.2, 5.8, 2.1, 0.9, 4.3};
//     int size = 6;

//     ArrayAnalyzer analyzer(numbers, size);
//     double minValue = analyzer.findMinimum();

//     cout << "Minimum value: " << minValue << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class ArrayAnalyzer {
// private:
//     double* data;
//     int arraySize;

// public:
//     ArrayAnalyzer(double inputArray[], int size) {
//         arraySize = size;
//         data = new double[arraySize];
//         for (int i = 0; i < arraySize; i++) {
//             data[i] = inputArray[i];
//         }
//     }
//     ~ArrayAnalyzer() {
//         delete[] data;
//     }
//     double findMinimum() {
//         if (arraySize <= 0) {
//             cout << "Error: No data!" << endl;
//             return 0.0;
//         }

//         double smallest = data[0];
//         for (int i = 1; i < arraySize; i++) {
//             if (data[i] < smallest) {
//                 smallest = data[i];
//             }
//         }
//         return smallest;
//     }
// };

// int main() {
//     const int SIZE = 10;
//     double numbers[SIZE];
//     cout << "Enter 10 numbers:" << endl;
//     for (int i = 0; i < SIZE; i++) {
//         cout << "Number " << i + 1 << ": ";
//         cin >> numbers[i];
//         while (cin.fail()) {
//             cin.clear();
//             cin.ignore(1000, '\n');
//             cout << "Invalid input. Please enter a number: ";
//             cin >> numbers[i];
//         }
//     }
//     ArrayAnalyzer analyzer(numbers, SIZE);

//     double minValue = analyzer.findMinimum();

//     cout << "\nThe smallest number is: " << minValue << endl;

//     return 0;
// }

// 1. Input and Display a 3×3 Matrix


// #include <iostream>
// using namespace std;
// int main() {
//     int matrix[3][3];

//     cout << "Enter elements of 3x3 matrix:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "\nMatrix is:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// Q2. Sum of All Elements in a 2×3 Array
// #include <iostream>
// using namespace std;
// int main() {
//     int matrix[2][3];
//     int sum = 0;

//     cout << "Enter elements of 2x3 matrix:" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> matrix[i][j];
//             sum += matrix[i][j]; // Accumulate sum
//         }
//     }

//     cout << "\nSum = " << sum << endl;

//     return 0;
// }

// Q3. Print Row-wise and Column-wise Sums

// #include <iostream>
// using namespace std;
// int main() {
//     int matrix[3][3];
//     int rowSum[3] = {0, 0, 0};
//     int colSum[3] = {0, 0, 0};

//     cout << "Enter elements of 3x3 matrix:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> matrix[i][j];
//             rowSum[i] += matrix[i][j]; // Accumulate row sum
//             colSum[j] += matrix[i][j]; // Accumulate column sum
//         }
//     }

//     cout << "\nRow sums:" << endl;
//     for (int i = 0; i < 3; i++) {
//         cout << "Sum of row " << i + 1 << " = " << rowSum[i] << endl;
//     }

//     cout << "\nColumn sums:" << endl;
//     for (int j = 0; j < 3; j++) {
//         cout << "Sum of column " << j + 1 << " = " << colSum[j] << endl;
//     }

//     return 0;
// }

// Q4. Find Largest Element in Each Row
// #include <iostream>
// using namespace std;
// int main() {
//     int matrix[3][3];
//     cout << "Enter elements of 3x3 matrix:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "\nRow max values:" << endl;
//     for (int i = 0; i < 3; i++) {
//         int maxVal = matrix[i][0];
//         for (int j = 1; j < 3; j++) {
//             if (matrix[i][j] > maxVal) {
//                 maxVal = matrix[i][j];
//             }
//         }
//         cout << maxVal << (i < 2 ? ", " : "\n");
//     }

//     return 0;
// }


// Q5. Transpose of a Matrix

// #include <iostream>
// using namespace std;
// int main() {
//     int matrix[3][3];
//     cout << "Enter elements of 3x3 matrix:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "\nTranspose:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << matrix[j][i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 6. Matrix Addition

// #include <iostream>
// using namespace std;
// int main() {
//     int A[2][2], B[2][2], C[2][2
// ];
//     cout << "Enter elements of first 2x2 matrix (A):" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cin >> A[i][j];
//         }
//     }
//     cout << "Enter elements of second 2x2 matrix (B):" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cin >> B[i][j];
//         }
//     }
//     // Matrix addition
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }

//     cout << "\nResultant matrix after addition (C = A + B):" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }   

// Q7. Matrix Multiplication (2×3 × 3×2)

// #include <iostream>
// using namespace std;
// int main() {
//     int A[2][3], B[3][2], C[2][2] = {0};
//     cout << "Enter elements of first 2x3 matrix (A):" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> A[i][j];
//         }
//     }       
//     cout << "Enter elements of second 3x2 matrix (B):" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             cin >> B[i][j];
//         }
//     }
//     // Matrix multiplication
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             for (int k = 0; k < 3; k++) {           
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
//     cout << "\nResultant matrix after multiplication (C = A x B):" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Q8. Passing a 2D Array to a Function

// #include <iostream>
// using namespace std;
// void printMatrix(int arr[][3], int rows) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     cout << "The matrix is:" << endl;
//     printMatrix(matrix, 3);

//     return 0;
// }

// Q9. Check if a Matrix is Symmetric

#include <iostream>
using namespace std;
int main() {
    int matrix[3][3];
    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }                                   
    }
    bool isSymmetric = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }
    if (isSymmetric) {
        cout << "\nThe matrix is symmetric." << endl;
    } else {
        cout << "\nThe matrix is not symmetric." << endl;
    }
    return 0;
}