/**
    //----->Program.No - 28 (important) For(logic building)/ multiple concept:
    write a program to fill a square matrix with value zero on the diagonal, 1
    on the upper right triangle and -1 on the lower left triangle
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of square matrix: ";
    cin >> n;

    int mat[10][10]; // You can increase size if needed

    // Fill matrix according to rule
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                mat[i][j] = 0;
            else if (i < j)
                mat[i][j] = 1;
            else
                mat[i][j] = -1;
        }
    }

    // Display matrix
    cout << "\nMatrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
