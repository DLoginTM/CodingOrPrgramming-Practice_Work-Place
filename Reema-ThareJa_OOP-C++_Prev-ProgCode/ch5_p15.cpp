/**
    //----->Program.No - 15:
    Write a program to implement linaer-search in given arrays.
*/


/**
    //--------->Algo_linear search (reema_c++-book):
    Linear search(A,N, VAL, POS)
    s1: (initialize) set pos=-1
    s2: set i=0
    s3: repeat s4 while i<n
    s4:     if a[i] = val, then
                            set pos=i
                            print pos
                            go to s6
            (end of if)
        (end of loop)
    s5:print value not present
    s6:exit
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[10], n, num, found=0, pos=-1;

    //------->input taking from user:
    cout <<"number of element in narr1:"; cin >> n;
    cout <<"enter tyhe elemnts in arr 1:";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    cout <<"elemen that need to search:"; cin >> num;
    for(int i=0; i<n; i++){
        if(arr1[i] == num){
            found=1; pos=i;
            cout<<" "<<num<<" is found = "<<i;
            break;
        }
    }

    if(found==0){
        cout <<"not exixts";
    }

}
