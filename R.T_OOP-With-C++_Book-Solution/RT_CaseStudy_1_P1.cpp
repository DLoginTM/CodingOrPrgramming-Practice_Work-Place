/*
    ******************----->NOTE<----******************

    //-------->Concept of "Roman_Number"-Representation of of number.

    Note: Roman numerals are written as combinations of seven letters.

    I=1 || V=5 || X= 10
    L= 50 || C= 100 || D= 500 || M= 1,000

    If smaller numbers follow larger numbers, the numbers are added.
    If a smaller number precedes a larger number,
    the smaller number is subtracted from the larger number.
    Some more examples are listed here:

            Example:
                        VII = 5 + 2 = 7
                        IX = 10-l=9
                        XL= 50- 10 = 40
                        CX = 100 + 0 = 11

                        MCMLXXXIV = 1000 + (1000 - 100) + 50 + 30
                        +(5-1) = 1984

            Explanation of Me about above examples:



    //-------->Most Important: Roman numeral table:

        Number ||  Roman_Representation
    -----------------------------------------
        1           I
        2           II
        3           III
        4           IV
        5           V
        6           VI
        7           VII
        8           VIII
        9           IX
        10          X

    -----------------------------------------
        11           XI
        12           XII
        13           XIII
        14           XIV
        15           XV
        16           XVI
        17           XVII
        18           XVIII
        19           XIX
        20           XX
    -----------------------------------------
        21           XXI
        22           XXII
        23           XXIII
        24           XXIV
        25           XXV
        26           XXVI
        27           XXVII
        28           XXVIII
        29           XXIX
        30           XXX
        31           I
    -----------------------------------------
        40           XL
        50           L
        60           LX
        70           LXX
        80           LXXX
        90           XC
        100          C
        101          CI

        150          CL
        200          CC
        300          CCC
        400          CD
        500          D
        600          DC
        700          DCC
        800          DCCC
        900          CM

        1000          M

        1600          MDC
                     (REMEMBER ---> M(1000) + DC(600) = MDC(1600))

        1700          MDCC
                     (REMEMBER ---> M(1000) + DCC(700) = MDCC(1700))

        1900          MCM
                      (REMEMBER ---> M(1000) + CM(900) = MCM(1900))
*/


/*
    //---------------------------->
    Program.1: Display Roman number representation of given number
*/

#include <iostream>
//------->Extra_Header
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;


int main(){
    int inputNumber;
    int ones, tens, hundreds, thousands;

    cout<<"Enter any number between (1-3000):";
    cin>>inputNumber;


    if(inputNumber==0 || inputNumber>3000) //check number is valid or not
        cout<<"Invalid number as an input!.";

    //-------------------------->Main_Logic:
        //Extract the digit from thousand's place
        //thousands = (inputNumber/1000)*1000;

        //Process.2:
        thousands = ((inputNumber/1000)%10)*1000;

        //Extract the digit from hundred's place
        hundreds = ((inputNumber/100)%10)*100;

        //Extract the digit from hundred's place
        tens = ((inputNumber/10)%10)*10;

        //Extract the digit from one's place
        ones = ((inputNumber/1)%10)*1;
    //-------------------------->Main_Logic:


    //---------->Part For Thousands (1000):
    if(thousands==1000)
        cout<<"M";
    else if(thousands==2000)
        cout<<"MM";
    else if(thousands==3000)
        cout<<"MMM";


    //---------->Part For hundreds (100):
    if(hundreds==100)
        cout<<"C";
    else if(hundreds==200)
        cout<<"CC";
    else if(hundreds==300)
        cout<<"CCC";
    else if(hundreds==400)
        cout<<"CD";
    else if(hundreds==500)
        cout<<"D";
    else if(hundreds==600)
        cout<<"DC";
    else if(hundreds==700)
        cout<<"DCC";
    else if(hundreds==800)
        cout<<"DCCC";
    else if(hundreds==900)
        cout<<"CM";

    //---------->Part For tens (10):
    if(tens==10)
        cout<<"X";
    else if(tens==20)
        cout<<"XX";
    else if(tens==30)
        cout<<"XXX";
    else if(tens==40)
        cout<<"XL";
    else if(tens==50)
        cout<<"L";
    else if(tens==60)
        cout<<"LX";
    else if(tens==70)
        cout<<"LXX";
    else if(tens==80)
        cout<<"LXXX";
    else if(tens==90)
        cout<<"XC";

    //---------->Part For ones (1):
    if(ones==1)
        cout<<"I";
    else if(ones==2)
        cout<<"II";
    else if(ones==3)
        cout<<"III";
    else if(ones==4)
        cout<<"IV";
    else if(ones==5)
        cout<<"V";
    else if(ones==6)
        cout<<"VI";
    else if(ones==7)
        cout<<"VII";
    else if(ones==8)
        cout<<"VIII";
    else if(ones==9)
        cout<<"IX";

    return 0;
}
