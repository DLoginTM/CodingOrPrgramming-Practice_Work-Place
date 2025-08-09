/**
    //----->Program.No - 4: Write a program to concatenate two strings.
*/


#include <iostream>
#include <bits/stdc++.h>

#include <stdio.h>
using namespace std;

int main(){

    char str1[100], str2[100], str3[200];

    cout<<"\nEnter the 1st string:";
    cin.getline(str1, 100);
    cout<<"\nEnter the 2nd string:";
    cin.getline(str2, 100);

    int i=0, j=0;
    //--->using while loop
    while(str1[i] != '\0'){
        str3[j] = str1[i];
        i++; j++;
    }

    // Add space between strings only if both are non-empty and str1 doesn't already end with space
    if (strlen(str1) > 0 && strlen(str2) > 0 && str1[strlen(str1) - 1] != ' ') {
        str3[j++] = ' ';
    }

    i=0;
    while(str2[i] != '\0'){
        str3[j] = str2[i];
        i++; j++;
    }
    str3[j] = '\0';


    /**
        //------>Forloop
        int strIndx = 0;
        // Copy str1 to str3
        for (int i = 0; str1[i] != '\0'; i++) {
            str3[strIndx++] = str1[i];
        }
        // Add space if both strings are non-empty and str1 doesn't already end with space
        if (strlen(str1) > 0 && strlen(str2) > 0 && str1[strlen(str1) - 1] != ' ') {
            str3[strIndx++] = ' ';
        }
        // Copy str2 to str3
        for (int i = 0; str2[i] != '\0'; i++) {
            str3[strIndx++] = str2[i];
        }
        str3[strIndx] = '\0';  // Null terminate the concatenated string

    */
    cout<<"concatenating string:"<<str3;
    return 0;
}



/**
    //----->code using function:
        //------>for loop:
        void concatenateStrings(char str1[], char str2[], char result[]) {
        int i, j = 0;

        // Copy str1 to result
        for (i = 0; str1[i] != '\0'; i++) {
            result[j++] = str1[i];
        }

        // Add space if needed
        if (strlen(str1) > 0 && strlen(str2) > 0 && str1[strlen(str1) - 1] != ' ') {
            result[j++] = ' ';
        }

        // Copy str2 to result
        for (i = 0; str2[i] != '\0'; i++) {
            result[j++] = str2[i];
        }

        result[j] = '\0'; // Null-terminate
    }



    //------->using while loop
        void concatenateStrings(char str1[], char str2[], char result[]) {
        int i = 0, j = 0;

        // Copy str1 to result
        while (str1[i] != '\0') {
            result[j++] = str1[i++];
        }

        // Add space if needed
        if (strlen(str1) > 0 && strlen(str2) > 0 && str1[strlen(str1) - 1] != ' ') {
            result[j++] = ' ';
        }

        i = 0;
        while (str2[i] != '\0') {
            result[j++] = str2[i++];
        }

        result[j] = '\0'; // Null-terminate
    }

*/


/**
    //--------> code through python
        Using Function:
        def concatenate_strings(str1, str2):
            # Check if we need to insert a space
            if str1 and str2 and not str1.endswith(' '):
                return str1 + ' ' + str2
            else:
                return str1 + str2

        # Main program
        str1 = input("Enter the 1st string: ")
        str2 = input("Enter the 2nd string: ")

        result = concatenate_strings(str1, str2)
        print("Concatenated string:", result)

//---------------------------------------------------------
        not using function:
    # Main program
    str1 = input("Enter the 1st string: ")
    str2 = input("Enter the 2nd string: ")

    # Check if space is needed
    if str1 and str2 and not str1.endswith(' '):
        result = str1 + ' ' + str2
    else:
        result = str1 + str2

    print("Concatenated string:", result)

*/
