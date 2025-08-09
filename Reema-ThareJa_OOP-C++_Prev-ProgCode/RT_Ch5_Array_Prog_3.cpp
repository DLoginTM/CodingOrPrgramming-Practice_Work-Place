//----->Prog.3: Write a prog, to find largest of n numbers using array

#include <iostream>
//------->Extra_Header
#include <bits/stdc++.h>
//---->also can be for size of array
#define Max 100
using namespace std;

int main(){
    //---->1st need, one array, size of array, and a variable that store large value
    int arr[30], sizeN, largNum;
    //also possible, int arr[Max], sizeN, largNum;
    cout << "number of array elements:"; cin>>sizeN;
    cout << "array elem:";
    for(int i=0; i<sizeN; i++){
        cin>>arr[i];
    }
    largNum = arr[0]; // value of 0th index store in largNum
    for(int i=0; i<sizeN; i++){
        if(arr[i]>largNum){
            largNum = arr[i];
        }
    }
    cout <<"largNumber is :" << largNum;
}
