/**
    //----->Program.No - 14: Write a program to merge two sorted arrays.
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[10], arr2[10], tempArr[20], arr1_len, arr2_len, mergeVar, index=0;
    int index_f=0, index_s=0;

    //------->input taking from user:
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


    // Sort both arrays before merging
    //sort(arr1, arr1 + arr1_len);
    //sort(arr2, arr2 + arr2_len);

    //merger performanmce:
    mergeVar = arr1_len+arr2_len;


    //----------->Element is big or small corrosponding to its elements
    while(index_f < arr1_len && index_s < arr2_len){
        if(arr1[index_f] < arr2[index_s]){
            tempArr[index] = arr1[index_f]; index_f++;
        }
        else{
            tempArr[index] = arr2[index_s]; index_s++;
        }
        index++;
    }


    //----> if elements of arr1 is over but arr2 has some
    if(index_f == arr1_len){
        while(index_s < arr2_len){
            tempArr[index] = arr2[index_s];
            index_s++; index++;
        }
    }



    //----> if elements of arr2 is over but arr1 has some
    if(index_s == arr2_len){
        while(index_f < arr1_len){
            tempArr[index] = arr1[index_f]; index_f++; index++;
        }
    }

        /**
            // Copy remaining elements
            while (index_f < arr1_len) {
                tempArr[index++] = arr1[index_f++];
            }
            while (index_s < arr2_len) {
                tempArr[index++] = arr2[index_s++];
            }
        */


    cout<<endl;
    //----> merger arry
    cout<<"merge array is:";
    // for (int i = 0; i < arr1_len + arr2_len; i++){}
    for(int i=0; i<mergeVar; i++){
        cout <<" "<<tempArr[i];
    }
}
