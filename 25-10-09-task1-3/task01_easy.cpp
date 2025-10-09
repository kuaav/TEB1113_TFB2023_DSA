/******************************************************************************
Easy
Given two matrices, the task is to multiply them. Matrices can either be square or rectangular:

Examples: 

(Square Matrix Multiplication)

Input: m1[m][n] = { {1, 1}, {2, 2} }
m2[n][p] = { {1, 1}, {2, 2} }
Output: res[m][p] = { {3, 3}, {6, 6} }

(Rectangular Matrix Multiplication)

Input: m1[3][2] = { {1, 1}, {2, 2}, {3, 3} }
m2[2][3] = { {1, 1, 1}, {2, 2, 2} }
Output: res[3][3] = { {3, 3, 3}, {6, 6, 6}, {9, 9, 9} 

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int mat_1[3][3], mat_2[3][3], result[3][3] = {0};
    int row1, col1, row2, col2;

    cout << "== MATRIX MULTIPLICATION ==\n";
    cout << "Maximum size allowed is 3x3\n";

    cout << "Enter rows for the first matrix: ";
    cin >> row1;
    cout << "Enter columns for the first matrix: ";
    cin >> col1;

    cout << "Enter rows for the second matrix: ";
    cin >> row2;
    cout << "Enter columns for the second matrix: ";
    cin >> col2;

    // Check if multiplication is possible
    if (col1 != row2) {
        cout << "Matrices cannot be multiplied. Try again!\n";
        return 0;
    }

    // Input first matrix
    cout << "Enter elements of the first matrix:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> mat_1[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of the second matrix:\n";
    for (int i = 0; i < row2; i++) {     
        for (int j = 0; j < col2; j++) {  
            cin >> mat_2[i][j];
        }
    }

    // Multiply matrices
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0; // always initialize
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat_1[i][k] * mat_2[k][j];
            }
        }
    }

    cout << "== Result ==\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}