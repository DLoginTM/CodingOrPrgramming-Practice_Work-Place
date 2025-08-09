//----->Prog.6: Write a prog, to enter n (* (*number*) of digit)* ) and then
//             form or *(generate a number)* from these digit

// 1.>digit array || 2.> element of digit || 3.> new number

#include <iostream>
//#include <conio.h>

//----->For this prob
#include <math.h>

//------->Extra_Header
#include <bits/stdc++.h>
using namespace std;

int main(){
    //---->need 1  array that store digit, 1 var that store digit
    //individually and 1 main newNumber
    int digit_Arr[20], num_OfDigit, newNumber=0;
    cout << " number of digit:"; cin>>num_OfDigit;

    for(int i=0; i<num_OfDigit; i++){
        cout <<"\n enter the ["<<i<<"] th digit:" ;
        cin>>digit_Arr[i];
    }
    //for(int i=0; i<num_OfDigit; i++){
    //    newNumber = newNumber + digit_Arr[i]*pow(10,i);
    //}
    //cout <<"new numer is:"<< newNumber;

        //----->While loop block
        int i=0;
        while(i<num_OfDigit){

            newNumber = newNumber + digit_Arr[i] * pow(10,i);
            i++;
        }
        cout <<"new numer is:"<< newNumber;
}


//------->flaws
/*
    1.>cout <<"\n enter the %d th digit:"<<i; // why this line?...
*/

//---->wrong in book;

