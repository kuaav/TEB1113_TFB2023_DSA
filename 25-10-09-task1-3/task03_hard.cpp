/* WHAT THE HELL IS THIS QUESTION
Given an n x n matrix mat[n][n] of integers, find the maximum value of mat(c, d) - mat(a, b) over all choices of indexes such that both c > a and d > b.

Example: 

Input:
mat[N][N] = {{ 1, 2, -1, -4, -20 },
             { -8, -3, 4, 2, 1 }, 
             { 3, 8, 6, 1, 3 },
             { -4, -1, 1, 7, -6 },
             { 0, -4, 10, -5, 1 }};
Output: 18
The maximum value is 18 as mat[4][2] 
- mat[1][0] = 18 has maximum difference. 
The program should do only ONE traversal of the matrix. i.e. expected time complexity is O(n2)
A simple solution would be to apply Brute-Force. For all values mat(a, b) in the matrix, we find mat(c, d) that has maximum value such that c > a and d > b and keeps on updating maximum value found so far. We finally return the maximum value.

Puteri Banafsha Binti Azmi
22010863

*/

#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

int main() {
    int n = 5;
    int mat[5][5] = {
        { 1,  2, -1, -4, -20 },
        { -8, -3,  4,  2,   1 },
        { 3,  8,  6,  1,   3 },
        { -4, -1,  1,  7,  -6 },
        { 0,  -4, 10, -5,   1 }
    };

    // Step 1: Create another matrix to store max values
    int maxArr[5][5];

    // Step 2: Start from the bottom-right corner
    maxArr[n - 1][n - 1] = mat[n - 1][n - 1];

    // Step 3: Fill the last row (right to left)
    for (int j = n - 2; j >= 0; j--) {
        maxArr[n - 1][j] = max(mat[n - 1][j], maxArr[n - 1][j + 1]);
    }

    // Step 4: Fill the last column (bottom to top)
    for (int i = n - 2; i >= 0; i--) {
        maxArr[i][n - 1] = max(mat[i][n - 1], maxArr[i + 1][n - 1]);
    }

    // Step 5: Fill the rest of the matrix from bottom-right to top-left
    int maxValue = INT_MIN;

    for (int i = n - 2; i >= 0; i--) {
        for (int j = n - 2; j >= 0; j--) {
            // Step 5a: Find possible maximum difference
            int potential = maxArr[i + 1][j + 1] - mat[i][j];
            maxValue = max(maxValue, potential);

            // Step 5b: Update maxArr[i][j] to store the largest value so far
            maxArr[i][j] = max(mat[i][j], max(maxArr[i + 1][j], maxArr[i][j + 1]));
        }
    }

    cout << "Maximum Value is: " << maxValue << endl;
    return 0;
}
