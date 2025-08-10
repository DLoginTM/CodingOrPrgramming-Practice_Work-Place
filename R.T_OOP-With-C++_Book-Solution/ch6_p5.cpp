/**
    //----->Program.No - 5: Write a program to append a strings to another string.
*/


#include <iostream>
#include <bits/stdc++.h>

#include <cstring>  // for strlen()

#include <stdio.h>
using namespace std;

int main() {
    char str1[100], str2[100], str3[200];

    cout << "\nEnter the 1st string: ";
    cin.getline(str1, 100);
    cout << "\nEnter the 2nd string: ";
    cin.getline(str2, 100);

    int i = 0, j = 0;

    // Copy str1 into str3
    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }

    // Add space if needed before appending
    if (strlen(str1) > 0 && strlen(str2) > 0 && str1[strlen(str1) - 1] != ' ') {
        str3[j++] = ' ';
    }

    i = 0;  // Reset i to start reading str2
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }

    str3[j] = '\0';  // Null-terminate the combined string


    /**
        //----->using for loop
        int i, j = 0;
        // Copy str1 to str3
        for (i = 0; str1[i] != '\0'; i++) {
            str3[j++] = str1[i];
        }
        // Add a space if needed between str1 and str2
        if (strlen(str1) > 0 && strlen(str2) > 0 && str1[strlen(str1) - 1] != ' ') {
            str3[j++] = ' ';
        }
        // Copy str2 to str3
        for (i = 0; str2[i] != '\0'; i++) {
            str3[j++] = str2[i];
        }
        str3[j] = '\0';  // Null terminate
    */

    cout << "\nAfter appending, the string is: " << str3 << endl;

    return 0;
}


/**
    //------->Program through Function
    // Function to append str2 to str1 into str3
        void appendStrings(char str1[], char str2[], char str3[]) {
            int i, j = 0;

            // Copy str1 to str3
            for (i = 0; str1[i] != '\0'; i++) {
                str3[j++] = str1[i];
            }

            // Add space only if needed
            if (strlen(str1) > 0 && strlen(str2) > 0 && str1[strlen(str1) - 1] != ' ') {
                str3[j++] = ' ';
            }

            // Copy str2 to str3
            for (i = 0; str2[i] != '\0'; i++) {
                str3[j++] = str2[i];
            }

            str3[j] = '\0';  // Null-terminate the final string
        }
*/


/**
    //-------------------->
        Python code using function
    def append_strings(str1, str2):
        # Add a space only if needed
        if str1 and str2 and not str1.endswith(' '):
            return str1 + ' ' + str2
        else:
            return str1 + str2

    # Main program
    str1 = input("Enter the 1st string: ")
    str2 = input("Enter the 2nd string: ")

    result = append_strings(str1, str2)

    print("After appending, the string is:", result)

    //------------------------------------------------------------
        not using function
        # Main program
        str1 = input("Enter the 1st string: ")
        str2 = input("Enter the 2nd string: ")

        # Add space only if needed
        if str1 and str2 and not str1.endswith(' '):
            result = str1 + ' ' + str2
        else:
            result = str1 + str2

        print("After appending, the string is:", result)
*/
