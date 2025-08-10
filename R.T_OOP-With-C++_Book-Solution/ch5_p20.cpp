/**
    //----->Program.No - 20:
    Write a program to print elements of 2D array
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3] = {6,7,9,8,4,3,1,5,2};
    for(int i=0; i<3;i++){
        cout<<endl;
        for(int j=0; j<3; j++){
            cout << " " <<arr[i][j];
        }
    }
    return 0;
}


