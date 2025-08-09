/**
    //----->Program.No - 18(Important_For_PatternAnalysis): Write a program to merge two integer array.
    Display the merge array in reverse order.
*/

///----->Note: this code is using function:

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//--------> to read the arry
void readAray(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

//---------->tor merge the arrays
void mergeArr(int arr1[], int n, int arr2[], int m, int finalArr[]){
    int k=0;
    for(int i=0; i<n; i++){
        finalArr[k++] = arr1[i];
    }
    for(int i=0; i<m; i++){
        finalArr[k++] = arr2[i];
    }
}

//-------->display the array
void disArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< " "<<arr[i];
    }
}

//----------> reverse the array
void revArr(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        cout <<" "<<arr[i];
    }
}

/**
    //----------> reverse the array using "i++"
    void revArr(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            cout << arr[n - 1 - i] << " ";
        }
        cout << endl;
    }
*/


int main(){
    int arr1[10], arr2[10], finArr[30], n, m, t;
    cout<<"size of arr1:"; cin>>n;
    readAray(arr1, n);

    cout<<"size of arr2:"; cin>>m;
    readAray(arr2, m);

    //----> merge:
    t = n + m;

    mergeArr(arr1, n, arr2, m, finArr);
    cout <<" merger array:" << endl;
    disArr(finArr, t);

    cout <<"merge array in reverse:";
    revArr(finArr, t);
    return 0;
}
