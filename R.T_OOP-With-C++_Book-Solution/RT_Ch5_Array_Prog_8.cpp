//----->Prog.8: wap, to read of 50 students in the range of 0-100.
//              then make 10 groups such as 0-10. 10-20, 20-30 so on.
//              count the number of values that fails in each group and
//              display the result.

#include <iostream>

//------->Extra_Header
#include <bits/stdc++.h>
using namespace std;

//--------------->book code
int main(){
    int marks[30];
    int group[10] = {0};
    cout <<"enter the marks of 50 studente:";
    for(int i=0; i<30; i++){
        cout <<"\n marks["<<i<<"] = ";
        cin>>marks[i];
        ++group[(int)(marks[i/10])];
    }
    cout <<"\n\n ***********************************";
    cout<<"\n grout \t\t frequency";
    for(int i=0; i<10; i++){
        cout <<"\n "<<i<<" \t\t "<<group[i];
    }
}


//------>not understand this problem
