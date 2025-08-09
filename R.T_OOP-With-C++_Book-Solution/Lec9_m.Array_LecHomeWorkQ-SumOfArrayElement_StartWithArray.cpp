/*
    //-------->Love.Bubber_DSA.C - [ft. - CodeHelp.YT]
            L9: C++/-> Introduction_With.Array
*/

//------>Importing.The.Libraries:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//------->For.MathematicalOperation
#include <math.h>

//-------------->Creating.A_Function.To - Print.SumOf_Array.Element:
int get_SumOfArrElem(int arrV[], int n){
    int sumOfElem_Arr = 0; for(int i=0; i<n; i++){
        sumOfElem_Arr += arrV[i];
    }
    return sumOfElem_Arr;
}

int main(){
    int ArrSize; cout << "Enter Size Of, An.Array:"; cin >> ArrSize;
    int inputArr[10000];
    cout << "Please, Enter Array_Element's According To Array_Size:";
    for(int i=0; i<ArrSize; i++){
        cin >> inputArr[i];
    }
    int getSum_Res = get_SumOfArrElem(inputArr, ArrSize);
    cout << "Sum.Of Array_Element's Is:" << getSum_Res;
}

