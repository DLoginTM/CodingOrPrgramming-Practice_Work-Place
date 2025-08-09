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

//---------->Importing.UserDefined_Finction - Based.On_
bool linearSearch_Func(int arrV[], int sizeOfArr_n, int search_keyItem);

int main(){
    int ArrSize_n; cout << "Hey User, Please Enter Size.Of_An - Array:"; cin >> ArrSize_n;
    int mainArr[100];
    cout << "User, Please Enter Array.Element's:";
    for(int i=0; i<ArrSize_n; i++){
        cin >> mainArr[i];
    }

    cout << endl;
        //---------->Printing.The_Array.Element's:
    cout << "Inputed Array.Element's Through_User Are:";
    for(int i=0; i<ArrSize_n; i++){
        cout << mainArr[i] << " ";
    }

    cout << endl;
        //--------->The_Key.Element - Which.Need_T.Be_Find:
    int kItem; cout << "please, Enter Key.value Which Want to Search:"; cin >> kItem;

    bool item_foundOrNot = linearSearch_Func(mainArr, ArrSize_n, kItem);
    //---------->Result.As_Statement:
    if(item_foundOrNot){
        cout << "Item is Present At This Array.";
    }else { cout << "Item is Not Present At This Array."; }

    return 0;
}

//-------------->Creating.A_Linear.Search_Function:
bool linearSearch_Func(int arrV[], int sizeOfArr_n, int search_keyItem){
    for(int i=0; i<sizeOfArr_n; i++){
        if(arrV[i] == search_keyItem){
            return 1;
        }
    }
    return 0;
}
