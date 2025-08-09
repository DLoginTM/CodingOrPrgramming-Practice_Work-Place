//----->Prog.1: Write a prog, to read and display n number using array

#include <iostream>
//------->Extra_Header
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[100], size_N;
    cout << " length of array:"; cin >> size_N;
    cout << " please input number:";
    for(int i=0; i<size_N; i++){
        cin >> arr[i];
    }
    cout << "input number's are:";
    for(int i=0; i<size_N; i++){
        //cout << " " <<arr[i];//----->output 7 8 9 4 5
        //cout<<endl;
        //------->Extra_Line:
        cout << " arr["<<i<<"] = " << arr[i];
    }
}
