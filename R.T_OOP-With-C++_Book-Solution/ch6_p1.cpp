/**
    //----->Program.No - 1: Write a program to find a length of string.
*/


#include <iostream>
#include <bits/stdc++.h>

#include <stdio.h>
using namespace std;

int main(){
    char str[20];
    int i, length;
    cout<<"Enter the string:";

    gets(str); // works as "cin>>"

    //using while loop
    while(str[i] != '\0'){
        i++;
    }
    length=i;
    cout<<"Length is:"<<length;



    /**
        //-------->for loop
        // Loop through the string until the null terminator is found
        for (int i = 0; str[i] != '\0'; i++) {
            length++; // Increment the counter for each character
        }
    */
}




/**
    //code in python
        Method-1:
    a = "geeks"
    print(len(a))


        Method-2
    a = "Hello"
    count = 0

    # Loop through each character in the string 'a'
    for char in a:
       # Increment 'count' by 1 for each character
        count += 1
    print(count)

        Method-3:
    a = "Hello"

    #It counts the number of occurrences
    #of the specified substring
    length = a.count("") - 1
    print(length)


        Method-4
    a = "geeks"

    #Initialize a variable 's'
    #to keep track of the string's length
    s = 0

    for i, a in enumerate(a):
      # Increment 's' by 1 for each character in the string
        s += 1
    print(s)
*/
