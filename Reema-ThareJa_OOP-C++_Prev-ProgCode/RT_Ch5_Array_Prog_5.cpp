//----->Prog.5: Write a prog, to find 2nd largest number in array using n number

#include <iostream>
//------->Extra_Header
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[30], sizeArr, largNum, sndLNum;
    cout << "len of array:"; cin>>sizeArr;
    cout<<"enter elem:";
    for(int i=0; i<sizeArr; i++){
        cin>>arr[i];
    }

    //---->why we use?
    //largNum = sndLNum = arr[0];


    //-----> logic of "larg" and "2ndLarge"
    //-->for large
    for(int i=0; i<sizeArr; i++){
        if(arr[i]>largNum){
            largNum=arr[i];
        }
    }
    //--->for 2nd large
    for(int i=0; i<sizeArr; i++){
        if(arr[i]!=largNum){
            if(arr[i]>sndLNum){
            sndLNum=arr[i];
            }
        }
    }

    cout << "input number:";
    for(int i=0; i<sizeArr; i++){
        cout << " " << arr[i];
    }
    cout << endl;
    cout <<"larg:" <<largNum << "||" << " 2nd larg:" << sndLNum;
}
