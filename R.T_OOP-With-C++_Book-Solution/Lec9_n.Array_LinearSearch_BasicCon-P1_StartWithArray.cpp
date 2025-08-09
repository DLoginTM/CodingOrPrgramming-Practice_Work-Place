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

//-------------->Creating.A_Linear.Search_Function:
bool linearSearch_Func(int arrV[], int sizeOfArr_n, int search_keyItem){
    for(int i=0; i<sizeOfArr_n; i++){
        if(arrV[i] == search_keyItem){
            return 1;
        }
    }
    return 0;
}

int main(){
    int ArrV[10] = {9,66,3,12,41,74,7,86,5,1};
    int kItem; cout << "please, Enter Key.value Which Want to Search:"; cin >> kItem;

    bool item_foundOrNot = linearSearch_Func(ArrV, 10, kItem);
    //---------->Result.As_Statement:
    if(item_foundOrNot){
        cout << "Item is Present At This Array.";
    }else { cout << "Item is Not Present At This Array."; }

    return 0;
}
