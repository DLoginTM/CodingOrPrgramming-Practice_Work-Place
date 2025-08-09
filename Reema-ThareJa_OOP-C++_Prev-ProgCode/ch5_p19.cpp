/**
    //----->Program.No - 19(Important_For_PatternAnalysis):
    Write a program to interchange the biggest and smallest number in array.
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

//-------->display the array
void disArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< " "<<arr[i];
    }
}

//----------->find biggest
int find_biggest_pos(int arr[], int n){
    int large, pos=-1;
    large=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>large){
            large = arr[i];
            pos=i;
        }
    }
    return pos;
}

//----------->find smallest
int find_smallest_pos(int arr[], int n){
    int small, pos=0;
    small=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<small){
            small=arr[i];
            pos=i;
        }
    }
    return pos;
}

//----------->interchange
void interchange(int arr[], int n){
    int temp, bigPos, smallPos;

    bigPos=find_biggest_pos(arr, n);
    smallPos=find_smallest_pos(arr,n);

    temp=arr[bigPos];

    arr[bigPos]=arr[smallPos];
    arr[smallPos]=temp;
    disArr(arr,n);
}


int main(){
    int arr[10], n;
    cout<<"enter the array size:"; cin>>n;
    readAray(arr, n);
    interchange(arr, n);

    return 0;
}

