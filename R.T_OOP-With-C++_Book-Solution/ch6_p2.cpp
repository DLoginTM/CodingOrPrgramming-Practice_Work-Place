/**
    //----->Program.No - 2: Write a program to Convert characters
    of string in upper class.
*/


#include <iostream>
#include <bits/stdc++.h>

#include <stdio.h>
using namespace std;

int main(){
    char str[100], upper_str[100];
    int i=0;

    cout<<"\nEnter the string:";
    //gets(str);
    cin.getline(str, 100);  // Accept full line including spaces

    while(str[i] != '\0'){
        if(str[i]>='a' && str[i]<='z'){
            upper_str[i] = str[i]-32;
        }
        else{
            upper_str[i] = str[i];
        }
        i++;
    }

    /**
        //---->forloop
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                upper_str[i] = str[i] - 32;  // Convert lowercase to uppercase
            } else {
                upper_str[i] = str[i];       // Copy as-is
            }
        }
    */

    upper_str[i] = '\0';
    cout<<"\nThe upper string:";
    puts(upper_str);

    return 0;
}


/**
    //----->code using python:
            Method-1
    # Input from user
    input_str = input("Enter the string: ")

    # Initialize empty string to store uppercase characters
    upper_str = ""

    # Loop through each character and convert
    for char in input_str:
        if 'a' <= char <= 'z':
            upper_str += chr(ord(char) - 32)  # Manual conversion to uppercase
        else:
            upper_str += char  # Keep other characters as-is

    # Output
    print("The upper string:", upper_str)
    ------------------------------------------------

    def to_uppercase(text):
    result = ""
    for char in text:
        if 'a' <= char <= 'z':
            result += chr(ord(char) - 32)  # Convert to uppercase
        else:
            result += char  # Keep as-is
    return result

    # Main program
    input_str = input("Enter the string: ")
    upper_str = to_uppercase(input_str)
    print("The upper string:", upper_str)


        Method-2
    input_str = input("Enter the string: ")
    print("The upper string:", input_str.upper())

    -----------------------------------------------
    def to_uppercase(text):
    return text.upper()

    # Main program
    input_str = input("Enter the string: ")
    print("The upper string:", to_uppercase(input_str))

*/
