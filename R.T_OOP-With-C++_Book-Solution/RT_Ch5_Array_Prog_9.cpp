//----->Prog.9: modify the previous problem(prob 8) to display
//              frequency histograms of each group;
#include <iostream>

//------->Extra_Header
#include <bits/stdc++.h>
using namespace std;

//--------------->book code
int main(){
    int marks[50];
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




    cout <<"\n group" << i<<" | ";
    for(int i=0; i<group[]; i++){
        cout <<"\n "<<i<<" \t\t "<<group[i];
    }
}


//------>not understand  also this problem this problem
