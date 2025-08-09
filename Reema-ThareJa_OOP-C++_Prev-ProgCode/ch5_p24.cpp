/**
    //----->Program.No - 24 (important)(code through paragraph statement) and
    for thinking ability improvement:

    Write a program to read the marks in two-dimentional array which stores
    marks of 10 students in five subjects. Write a program to display the
    highest marks in each subject.
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int marks[10][5], max_marks;
    for(int i=0; i<10; i++){
        //cout<<"\nEnter the marks obtained by %dth students";
        cout << "Enter the marks obtained by student " << i << endl;
        for(int j=0; j<5; j++){
            cout<<"marks["<<i<<"]["<<j<<"]= ";
            cin>>marks[i][j];
        }
    }

    for(int j=0; j<5; j++){
        max_marks=-999;
        for(int i=0; i<10; i++){
            if(marks[i][j]>max_marks){
                max_marks=marks[i][j];
            }
        }
        cout<<"\nThe highest marks obtained in the "<<j<<" subject= "<<max_marks;
    }

    return 0;
}
