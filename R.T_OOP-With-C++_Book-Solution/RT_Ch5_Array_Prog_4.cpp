//----->Prog.4: Write a prog, to interchange largest  and smallest number in array

#include <iostream>
//------->Extra_Header
#include <bits/stdc++.h>
using namespace std;

int main(){
    //--->need initially, 1 array,size and 1 temporary var, larg var and small var
    /*
        //basic asumstion
        //-->interchange means "swap"
        swap method:
            int temp, large, small;
            temp=large;
            large=small;
            small=temp;
    */
    int arr[30], sizeA,tempVar;
    int smallElem, largElem, smallElem_Indx = 0, largElem_Indx = 0;

    cout << "number of elements in array:"; cin>>sizeA;
    cout << "enter of elements: ";
    for(int i=0; i<sizeA; i++){
        cin>>arr[i];
    }
    cout << "inputed elements in array:";
    for(int i=0; i<sizeA; i++){
        cout << " " << arr[i];
    }

    //------>need or not: statuse:--->
    smallElem = largElem = arr[0];

    //------->main larg or small find storing logic
    for(int i=0; i<sizeA; i++){
        if(arr[i]<smallElem){
            smallElem=arr[i];
            smallElem_Indx = i;
        }
        if(arr[i]>largElem){
            largElem=arr[i];
            largElem_Indx = i;
        }
    }
    cout << endl;
    cout << "small elem is :" << smallElem << " and position is: " << smallElem_Indx << endl;
    cout << "larg elem is:" << largElem << " and position is: " << largElem_Indx << endl;

    //----->interchange or swap logic
    tempVar = arr[largElem_Indx];
    arr[largElem_Indx] = arr[smallElem_Indx];
    arr[smallElem_Indx] = tempVar;

    cout << "new array after small and lagre eleme inter change:";
    for(int i=0; i<sizeA; i++){
        cout << " \n arr["<<i<<"]" << arr[i];
    }
}

//----->Remark output of prog 4 is wrong in book!!
