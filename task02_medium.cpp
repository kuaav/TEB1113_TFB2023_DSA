/*Medium 
Given a square matrix mat[][], Rotate the matrix by 180 degrees.
Note: Rotating 180° clockwise or anticlockwise gives the same result.

Puteri Banafsha binti Azmi
22010863
*/

#include <iostream>
using namespace std; 

int main(){
    int row, col;
    int mat[2][2]; 
    
    cout << "Enter a row and column of a square matrix (e.g., 2x2): " << "\n";
    cin >> row >> col; 
    
    while (row != col) {
        cout << "That is not a square matrix. Enter the row and column again: ";
        cin >> row >> col; 
    }

    cout << "Enter the values in the matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }

    // Print original matrix in a box
    cout << "\nOriginal matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n"; // <-- move to next line after each row
    }

    // Print rotated 180° matrix in a box
    cout << "\nMatrix rotated by 180 degrees:\n";
    for (int i = row - 1; i >= 0; i--) {
        for (int j = col - 1; j >= 0; j--) {
            cout << mat[i][j] << " ";
        }
        cout << "\n"; // <-- move to next line after each row
    }

    return 0;
}