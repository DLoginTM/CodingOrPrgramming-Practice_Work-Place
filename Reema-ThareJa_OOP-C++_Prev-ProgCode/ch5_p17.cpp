/**
    //----->Program.No - 17: Write a program to read an array of n numbers
    and then find out the smallest.
*/

///----->Note: this code is using function:

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//--------> read the array
void readArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
}

//-------->Find the smallest element:
int smallElem(int arr[], int n){
    int small= arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    return small;
}

int main(){
    int arr[10], arrL, smElem;
    cout<<"enter the arry size:"; cin>>arrL;
    readArr(arr, arrL);
    smElem = smallElem(arr, arrL);
    cout<<"smallest elem is:"<<smElem;

    return 0;
}
