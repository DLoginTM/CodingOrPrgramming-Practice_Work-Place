/**
    //----->Program.No - 26 (important) For(logic building):
    Write a program to multyply a mXn matrices.
*/


#include <iostream>
#include <bits/stdc++.h>

#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int rows1, cols1, rows2, cols2, res_rows, res_cols;
    int mat1[5][5], mat2[5][5], mat3[5][5];


    cout<<"Enter the number of rows and columns in the first matrix:";
    cin>>rows1>>cols1;
    cout<<"Enter the number of rows and columns in the second matrix:";
    cin>>rows2>>cols2;

    if(cols1 != rows2){
        cout<<"\nThe number of columns in the first matrix must be equal to the number of rows in the second matrix";
        return 1;
    }
    res_rows=rows1, res_cols=cols2;


    cout<<"\nEnter the elements of the first matrix"<<endl;
    for(int i=0; i<rows1; i++){
        for(int j=0; j<cols1; j++){
            cout<<"mat1["<<i<<"]["<<j<<"]=";
            cin>>mat1[i][j];
        }
    }

    cout<<"\nEnter the elements of the second matrix"<<endl;
    for(int i=0; i<rows2; i++){
        for(int j=0; j<cols2; j++){
            cout<<"mat2["<<i<<"]["<<j<<"]=";
            cin>>mat2[i][j];
        }
    }


    for(int i=0; i<res_rows; i++){
        //int j=0;
        for(int j=0; j<res_cols; j++){
            mat3[i][j]=0;
            for(int k=0; k<cols1; k++){
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout<<"\nThe elements of the matrix are:";
    for(int i=0; i<res_rows; i++){
        cout<<endl;
        for(int j=0; j<res_cols; j++){
            cout<<"mat3["<<i<<"]["<<j<<"] = "<<mat3[i][j];
        }
    }

    return 0;
}
