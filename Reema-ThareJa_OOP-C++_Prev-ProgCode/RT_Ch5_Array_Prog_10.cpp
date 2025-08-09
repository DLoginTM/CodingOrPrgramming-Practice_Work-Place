//----->Prog.10: wap, to read a sort list of floating points value
//               and then calculate and display the median of values

#include <iostream>

//------->Extra_Header
#include <bits/stdc++.h>
using namespace std;

int main(){
    // need a array that sore float value , array len and midean variable
    float meanArr[20], midean;
    int meanArr_Len;
    cout <<" size of arr:";cin>>meanArr_Len;

    cout<<"enter elem in the arr:";
    for(int i=0;i<meanArr_Len; i++){
        cin>>meanArr[i];
    }

    //----->main logic of midean
    if(meanArr_Len%2 == 0){
        midean  = (midean + meanArr[meanArr_Len/2-1]) /2.0;
    }
    cout << "midean:" << midean;
}

//---->need clarification: not undestand mean findin;
// nead math for mean median finding formula.

/**
    //------->Wron in book logic:

        //----->main logic of midean
    if(meanArr_Len%2 == 0){
        midean = (meanArr[meanArr_Len/2] + meanArr[meanArr_Len/2+1]) / 2.0;
    } else {
        midean = meanArr[meanArr_Len/2 + 1];
    }
    cout << "midean:" << midean;
*/
