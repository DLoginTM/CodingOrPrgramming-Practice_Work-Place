/*
    ******************----->NOTE<----******************

    //-------->Concept Of finding "Day Of Birth"
    based on you "date of birth".


    //------>Century_Table:

    Century         ||      Value
    -----------------------------
    1700-1799                   4
    1800-1899                   2
    1900-1999                   0
    2000-2099                   6

    2100-2199                   4
    2200-2299                   2
    2300-2399                   0
    2400-2499                   6

    2500-2599                   4
    2600-2699                   2



    //------>Month_Table:

    Month           ||      Value
    -----------------------------
    January                     0(in leap year 6)
    February                    3(in leap year 2)
    March                       3
    April                       6
    May                         1
    June                        4
    July                        6
    August                      2
    September                   5
    October                     0
    November                    3
    December                    5



    //------>Day_Table:

    Day           ||        Value
    -----------------------------
    Sunday                      0
    Monday                      1
    Tuesday                     2
    Wednesday                   3
    Thursday                    4
    Friday                      5
    Saturday                    6



    //------->Algorithm:,
    to calculate the the day of the week.

        1.Find the Century.
        2.Find the Year,
            Note: We know that there are 365 days
            in year and also that is "52 weeks" plus
            "one"Day.

            Each year starts on the day of the week after
            the first day of the preceding year.
            Each leap year = 365 + 1 = 366 days.

            //------->Main_Theory:
            If we know on which day a century starts (from the
            above) and we add the number of years elapsed since
            the start of the century, plus the number of leap years
            that have clapsed since the start of the century, we get
            the day of the week on which the year starts, where year
            is the last two digits of the year.

        3.Find the month. (find the day of the week when a
                           month starts.)

        4.Find the day of the month. ( which day of the week
        the month starts, we simply add the day of the
        month to find the final result)
*/




/**
    //------------->Understand through Example:
        Consider the following algorithm to
        calculate the day of 24 April 1982.

        1.Find the century value of 1900s from the centuries table 0
        2.Last two digits give the value of year 82
        3.Divide the 82 by 4. 82/4 = 20.5 and
        drop the fractional part 20
        4.Find the value of April in the months table 6

        5.Add all numbers from steps 1-4 to the day of the
        month (in this case, 24) 0 + 82 + 20 + 6+24 = 132

        6.Divide the result of step 5 by 7 and find the
        remainder: 132/7 = 18 remainder 6
        7.Look up the day's table for the remainder
        obtained 6= Saturday


        //----------->Experiment on 11 July 1999

            1.century table = 0
            2.last 2 digit = 99
            3.99/4 = 24.75 = 24 (remove fraction)
            4. july table = 6

            5.0+99+24+6+11 = 140
            6.140/7 = 20 and remainder(0)
            7. 0 = Day_table (Sunday)
*/



/*
    //---------------------------->
    Program.2: Calculate the day of birth on entering
               the date of birth.
*/


#include <iostream>

//--------->C Language  Header
#include <stdlib.h>
#include <conio.h>

//------->Extra_Header
#include <bits/stdc++.h>
using namespace std;


int main(){
    int dd, mm, yy; //------->day-month-year according to input
    int year, month, day, i, n;

    cout<<"Enter the date:"; cin>>dd>>mm>>yy;

    //------>check the date is valid
    if(day>31 || month>12){
        cout<<"Invalid INPUT!.";
        getch();
        exit(0);
    }

    //------>Find the yaer:
    year = yy-1900;
    year = year/4;
    year = year+yy-1900;

    //------>Find the month:
    switch(mm){
        case 1:
        case 10: month = 1;
                 break;

        case 2:
        case 3:
        case 11: month = 4;
                 break;

        case 7:
        case 4: month = 0;
                 break;

        case 5: month = 2;
                 break;

        case 6: month = 5;
                 break;

        case 8: month = 3;
                 break;

        case 9:
        case 12: month = 6;
                 break;
    }

    //------>Find the day:
    year = year+month;
    year = year+dd;
    day=year%7;

    switch(day){
        case 0: cout<<"SATURDAY";
                break;

        case 1: cout<<"SUNDAY";
                break;

        case 2: cout<<"MONDAY";
                break;

        case 3: cout<<"TUESDAY";
                break;

        case 4: cout<<"WEDNESSDAY";
                break;

        case 5: cout<<"THURSDAY";
                break;

        case 6: cout<<"FRIDAY";
                break;
    }

    getch();
    return 0;
}
