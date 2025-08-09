/**
    //----->Program.No - 22 (important)(code throu paragraph statement) and
    for thkning ability improvement:

    In a small company, there are 5 salesmen. Each salesman is supposed to sell
    3 products. Write a program using 2d arry to print:
        i. total sales by each salesman
        ii. total sales of each item
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int sales[5][3], total_sales=0;

    // input dat
    cout<<"\nEnter the data";
    for(int i=1; i<=5; i++){
        cout<<"Enter the sales of 3 items solds by " <<i<<" salesman:";
        for(int j=0; j<3; j++){
            cin>>sales[i][j];
        }
    }


    cout<<endl;
    //print the sales by each salesman
    for(int i=1; i<=5; i++){
        total_sales=0;
        for(int j=0; j<3; j++){
            total_sales += sales[i][j];
        }
        cout<<"Toatl sales by "<<i<<" salesman ="<<total_sales<<endl;
    }
    /**
        This part: Adds up all 3 item sales for each salesman
        Enter the sales data:
        Enter the sales of 3 items sold by salesman 1: 10 20 30
        Enter the sales of 3 items sold by salesman 2: 5 15 25
        Enter the sales of 3 items sold by salesman 3: 12 8 10
        Enter the sales of 3 items sold by salesman 4: 20 10 5
        Enter the sales of 3 items sold by salesman 5: 30 25 15

        Total sales by each salesman:
        Salesman 1: 60  //(10+20+30)
        Salesman 2: 45
        Salesman 3: 30
        Salesman 4: 35
        Salesman 5: 70
    */



    //total sales of each item
    for(int i=0; i<3; i++){
        total_sales=0;
        for(int j=0; j<5; j++){
            total_sales += sales[j][i];
        }
        cout<<"\nToatl sales of "<<i<<" item ="<<total_sales;
    }

    /**
        This part: Adds up sales of item i across all salesmen
        Total sales of each item:
        Item 1: 77 //(10+5+12+20+30)
        Item 2: 78
        Item 3: 85
    */

    return 0;
}
