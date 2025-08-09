//----->Prog.7: Write a prog, to find whether the array of integer(array element)
//              contains a duplicate number

#include <iostream>

//------->Extra_Header
#include <bits/stdc++.h>
using namespace std;

int main(){
    //need: 1 array and and array len and 1 var that store duplicate number
    int arr[10], lenOf_Arr, dupliVal;
    cout<<"len of arr:"; cin>>lenOf_Arr;

    cout <<"element of array:";
    for(int i=0; i<lenOf_Arr; i++){
        cin>>arr[i];
    }

    for(int i=0; i<lenOf_Arr; i++){
        for(int j=i+1; j<lenOf_Arr; j++){
            if(arr[i] == arr[j] && i!=j){
                dupliVal = 1;
                cout <<"Duplicate value:" <<arr[i]  <<" Present at:" << i <<" and " << j <<endl;
            }
        }
    }
    if(dupliVal != 1)
        cout << "no duplicate";
}


/**
    //-------This porion not working of book code
    int main(){

    for(int i=0; i<lenOf_Arr; i++){
        for(int j=i+1; j<lenOf_Arr; j++){
            if(arr[i] == arr[j] && i!=j){
                cout <<"Duplicate value:" <<arr[i]  <<" Present at:" << i <<" and " << j <<endl;
            }
            if(dupliVal = 0) { cout << "no duplicate"; }
        }
    }
   //-------------------------------------------->this part
    if(dupliVal = 0) { cout << "no duplicate"; }
   //--------------------------------------------->this part
}
*/




/**
    //explanation
    int arr[10] = {1,2,6,4,7,8,9,2,14,10}
    duplicate numb = 2 //cause it appear in index 1 and 7

    need 2 pointer approach,
    //-------------------------------------
                   i
    int arr[10] = {1,2,6,4,7,8,9,2,14,10}, then
                   j

                   i
    int arr[10] = {1,2,6,4,7,8,9,2,14,10}, then
                     j

                   i
    int arr[10] = {1,2,6,4,7,8,9,2,14,10}, then and so on...
                    ---------- - - - - j
    //------------------------------------------------

                     i
    int arr[10] = {1,2,6,4,7,8,9,2,14,10}, then and so on
                   j


    //--------------------->equal sinario
                     i
    int arr[10] = {1,2,6,4,7,8,9,2,14,10}, then and so on
                   --------------j
*/
