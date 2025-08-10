/**
    //----->Program.No - 13: Write a program to merge two unsorted  arrays.
*/


#include <iostream>
using namespace std;

int main(){
    int arr1[10], arr2[10], tempArr[10], arr1_len, arr2_len, mergeVar, index=0;
    cout <<"number of element in narr1:"; cin >> arr1_len;
    cout <<"enter tyhe elemnts in arr 1:";
    for(int i=0; i<arr1_len; i++){
        cin>>arr1[i];
    }

    cout << endl;
    cout <<"number of element in narr2:"; cin >> arr2_len;
    cout <<"enter tyhe elemnts in arr 2:";
    for(int i=0; i<arr2_len; i++){
        cin>>arr2[i];
    }

    //merger performanmce:
    mergeVar = arr1_len+arr2_len;

    for(int i=0; i<arr1_len; i++){
        tempArr[index] = arr1[i]; index++;
    }

    for(int i=0; i<arr2_len; i++){
        tempArr[index] = arr2[i]; index++;
    }

    cout <<"merge array:";
    for(int i=0; i<mergeVar; i++){
        cout <<" "<< tempArr[i];
    }
}
