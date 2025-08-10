//----->Prog.2: Write a prog, to read and display n random number using array

#include <iostream>
//------->Extra_Header
#include <bits/stdc++.h>

//------>Header For this problem
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){
    //----->nead array and a variable that store randonNumber
    int arr[20], rand_Num;
    //Also possible: int arr[20], size, rand_Num; for(int i=0; i<size; i++){}
    for(int i=0; i<20; i++){
        //scaleing random number from 0 to (20-1),
        //here "20"is size of array
        rand_Num = rand()%20;
        arr[i] = rand_Num;
    }
    cout << "content of array:";
    for(int i=0; i<20; i++){
        cout << " " <<arr[i];
    }
}
