/**
    //----->Program.No - 25 (important) For(logic building):
    Write a program to transpose a 3X3 matrix.
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3], transPos_mat[3][3];

    cout<<"\nEnter the elements of the matrix"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"mat["<<i<<"]["<<j<<"]=";
            cin>>mat[i][j];
        }
    }

    //printing the matrix after user input
    cout<<"\nThe elements of the matrix are";
    for(int i=0; i<3; i++){
        cout<<endl;
        for(int j=0; j<3; j++){
            cout<<"\t mat["<<i<<"]["<<j<<"]="<<mat[i][j];
        }
    }

    //trasnpose matrix
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            transPos_mat[i][j] = mat[j][i];
        }
    }


    //printing the transpose matrix
    cout<<"\nThe elements of the transpose matrix are";
    for(int i=0; i<3; i++){
        cout<<endl;
        for(int j=0; j<3; j++){
            cout<<"\t transPos_mat["<<i<<"]["<<j<<"]="<<transPos_mat[i][j];
        }
    }

    return 0;
}
