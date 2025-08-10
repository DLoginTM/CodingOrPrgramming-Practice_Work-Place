/**
    //----->Program.No - 27 (important) For(logic building)/ multiple concept:
    Write a menu-driven program to read and display a mXn matrix.
    Find the sum, transpose and product of two mXn  matrices.

*/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void read_matrix(int mat[5][5], int r, int c);
void sum_matrix(int mat1[5][5], int mat2[5][5], int r, int c);
void mult_matrix(int mat1[5][5], int mat2[5][5], int r, int c);
void transpose_matrix(int mat[5][5], int r, int c);
void display_matrix(int mat[5][5], int r, int c);

int main() {
    int option, row, col;
    int mat1[5][5], mat2[5][5];

    do {
        cout << "\n******** MAIN MENU ********";
        cout << "\n1. Read the two matrices";
        cout << "\n2. Add the matrices";
        cout << "\n3. Multiply the matrices";
        cout << "\n4. Transpose the matrix";
        cout << "\n5. EXIT";
        cout << "\nEnter your option: ";
        cin >> option;

        switch(option) {
            case 1:
                cout << "\nEnter the number of rows and columns of the matrix: ";
                cin >> row >> col;

                cout << "\nEnter the first matrix: ";
                read_matrix(mat1, row, col);

                cout << "\nEnter the second matrix: ";
                read_matrix(mat2, row, col);
                break;

            case 2:
                sum_matrix(mat1, mat2, row, col);
                break;

            case 3:
                if (col == row)
                    mult_matrix(mat1, mat2, row, col);
                else
                    cout << "\nTo multiply two matrices, number of columns in the first matrix must be equal to number of rows in the second matrix\n";
                break;

            case 4:
                transpose_matrix(mat1, row, col);
                transpose_matrix(mat2, row, col);
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "\nInvalid Option!";
        }
    } while(option != 5);

    return 0;
}

// Function to read a matrix
void read_matrix(int mat[5][5], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "mat[" << i << "][" << j << "] = ";
            cin >> mat[i][j];
        }
    }
}

// Function to add two matrices
void sum_matrix(int mat1[5][5], int mat2[5][5], int r, int c) {
    int i, j, sum[5][5];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "\nSum of the matrices:\n";
    display_matrix(sum, r, c);
}

// Function to multiply two matrices
void mult_matrix(int mat1[5][5], int mat2[5][5], int r, int c) {
    int i, j, k, prod[5][5] = {0};

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            for (k = 0; k < c; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "\nProduct of the matrices:\n";
    display_matrix(prod, r, c);
}

// Function to transpose a matrix
void transpose_matrix(int mat[5][5], int r, int c) {
    int i, j, tp_mat[5][5];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            tp_mat[j][i] = mat[i][j];
        }
    }

    cout << "\nTranspose of the matrix:\n";
    display_matrix(tp_mat, c, r); // Note: rows and cols are swapped
}

// Function to display a matrix
void display_matrix(int mat[5][5], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "mat[" << i << "][" << j << "] = " << mat[i][j] << "\t";
        }
        cout << endl;
    }
}




/**
    //----------->Above code in py:
    def read_matrix(rows, cols):
    print(f"\nEnter values for a {rows}x{cols} matrix:")
    matrix = []
    for i in range(rows):
        row = []
        for j in range(cols):
            val = int(input(f"mat[{i}][{j}] = "))
            row.append(val)
        matrix.append(row)
    return matrix

    def display_matrix(mat):
        for i in range(len(mat)):
            for j in range(len(mat[0])):
                print(f"mat[{i}][{j}] = {mat[i][j]}", end="\t")
            print()

    def sum_matrix(mat1, mat2):
        rows = len(mat1)
        cols = len(mat1[0])
        result = [[mat1[i][j] + mat2[i][j] for j in range(cols)] for i in range(rows)]
        print("\nSum of the matrices:")
        display_matrix(result)

    def mult_matrix(mat1, mat2):
        rows = len(mat1)
        cols = len(mat2[0])
        common = len(mat1[0])
        result = [[0 for _ in range(cols)] for _ in range(rows)]
        for i in range(rows):
            for j in range(cols):
                for k in range(common):
                    result[i][j] += mat1[i][k] * mat2[k][j]
        print("\nProduct of the matrices:")
        display_matrix(result)

    def transpose_matrix(mat):
        rows = len(mat)
        cols = len(mat[0])
        transposed = [[mat[j][i] for j in range(rows)] for i in range(cols)]
        print("\nTranspose of the matrix:")
        display_matrix(transposed)

    def main():
        mat1 = []
        mat2 = []
        rows = cols = 0

        while True:
            print("\n******** MAIN MENU ********")
            print("1. Read the two matrices")
            print("2. Add the matrices")
            print("3. Multiply the matrices")
            print("4. Transpose the matrices")
            print("5. EXIT")
            option = int(input("Enter your option: "))

            if option == 1:
                rows = int(input("\nEnter number of rows: "))
                cols = int(input("Enter number of columns: "))
                mat1 = read_matrix(rows, cols)
                mat2 = read_matrix(rows, cols)

            elif option == 2:
                if mat1 and mat2:
                    sum_matrix(mat1, mat2)
                else:
                    print("Please read the matrices first!")

            elif option == 3:
                if mat1 and mat2:
                    if len(mat1[0]) == len(mat2):
                        mult_matrix(mat1, mat2)
                    else:
                        print("Matrix multiplication not possible (incompatible dimensions).")
                else:
                    print("Please read the matrices first!")

            elif option == 4:
                if mat1 and mat2:
                    transpose_matrix(mat1)
                    transpose_matrix(mat2)
                else:
                    print("Please read the matrices first!")

            elif option == 5:
                print("Exiting...")
                break

            else:
                print("Invalid option!")

    if __name__ == "__main__":
        main()

*/
