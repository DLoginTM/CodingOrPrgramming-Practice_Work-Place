/**
    //----->Program.No - 29 (important) For(logic building)/ multiple concept:
    write a program to read and display a 2 x 2 x 2 array
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int array1[3][3][3];
    cout<<"\nEnter the elements of the matrix";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                cout<<"\n array["<<i<<"]["<<j<<"]["<<k<<"]=";
                cin>>array1[i][j][k];
            }
        }
    }

    cout<<"\nThe Matrix is:";
    for(int i=0; i<2; i++){
        cout<<endl;
        for(int j=0; j<2; j++){
            cout<<endl;
            for(int k=0; k<2; k++){
                cout<<"\n array["<<i<<"]["<<j<<"]["<<k<<"]="<<array1[i][j][k];
            }
        }
    }
    return 0;
}
