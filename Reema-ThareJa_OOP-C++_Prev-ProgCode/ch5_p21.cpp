/**
    //----->Program.No - 21:
    Write a program to generate pascal's triangle.
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[7][7] = {0}, row = 2, col;

    /**
        //------------> bookm method , but not working
        arr[0][0] = arr[1][0] = arr[1][1] = 1;
        while(row <= 7){
            arr[row][0] = 1;
            for(col = 1; col<=row; col++){
                arr[row][col] = arr[row-1][col-1] + arr[row-1][col];
                row++;
            }
        }
    */

    // Initial values
    arr[0][0] = arr[1][0] = arr[1][1] = 1;

    // Generate Pascal's Triangle
    /**
        Because the rest of the triangle is built using this rule:
            arr[n][k]= arr[n-1][k-1]+arr[n-1][k]
    */

    while(row < 7){
        arr[row][0] = 1;    // First element of each row is always 1
        for(col = 1; col < row; col++){
            arr[row][col] = arr[row-1][col-1] + arr[row-1][col];
        }
        arr[row][row] = 1;  // last element in each row is 1
        row++;
    }

    for(int i=0; i<7; i++){
        // Print spaces for alignment
        for(int space=0; space < 7 - i - 1; space++) {
            cout << "  ";  // 2 spaces for visual balance
        }
        // Print numbers with spaces
        for(int j=0; j<=i; j++){
            cout << arr[i][j] << "   ";  // extra space between numbers
        }
        cout << endl;
    }




    // Scalene Triangle:
//    for(int i=0; i<7; i++){
//        cout<<endl;
//        for(int j=0; j<=i; j++){
//            cout << " " << arr[i][j];
//        }
//    }

    return 0;
}



/**
    //--------------------------->Code through py
        1. Normal Pascal’s Triangle Centered (Equilateral) (function-use)

        def pascal_triangle_centered(rows):
            triangle = []

            for i in range(rows):
                row = [1] * (i + 1)
                for j in range(1, i):
                    row[j] = triangle[i-1][j-1] + triangle[i-1][j]
                triangle.append(row)

            # Print centered triangle
            max_width = len('   '.join(str(num) for num in triangle[-1]))
            for row in triangle:
                line = '   '.join(str(num) for num in row)
                print(line.center(max_width))


        pascal_triangle_centered(7)


    //--------------------------------------------------------
        1a. Normal Pascal’s Triangle Centered (Equilateral) (without-function-use)
        rows = 7
        triangle = []

        # Build the triangle
        for i in range(rows):
            row = [1] * (i + 1)
            for j in range(1, i):
                row[j] = triangle[i-1][j-1] + triangle[i-1][j]
            triangle.append(row)

        # Calculate max line width for centering
        max_width = len('   '.join(str(num) for num in triangle[-1]))

        # Print centered triangle
        for row in triangle:
            line = '   '.join(str(num) for num in row)
            print(line.center(max_width))


    //--------------------------------------------------------
        2. Normal Pascal’s Triangle (Left-Aligned)(without-function-use)
        rows = 7
        triangle = []

        for i in range(rows):
            row = [1] * (i + 1)
            for j in range(1, i):
                row[j] = triangle[i-1][j-1] + triangle[i-1][j]
            triangle.append(row)

        for row in triangle:
            print(' '.join(str(num) for num in row))


    //--------------------------------------------------------
        2a. Normal Pascal’s Triangle (Left-Aligned)(function-use)
        def pascal_triangle(rows):
            triangle = []

            for i in range(rows):
                row = [1] * (i + 1)
                for j in range(1, i):
                    row[j] = triangle[i-1][j-1] + triangle[i-1][j]
                triangle.append(row)

            # Print left-aligned triangle
            for row in triangle:
                print(' '.join(str(num) for num in row))


        pascal_triangle(7)

*/
