/**
    //----->Program.No - 3: Write a program to Convert string
    in lower class.
*/


#include <iostream>
#include <bits/stdc++.h>

#include <stdio.h>
using namespace std;

int main(){
    char str[100], lower_str[100];

    cout << "Enter the string: ";
    cin.getline(str, 100);  // Read full line including spaces

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            lower_str[i] = str[i] + 32;  // Convert to lowercase using ASCII
        } else {
            lower_str[i] = str[i];       // Keep character as is
        }
    }

    /**
        //---->while loop:
        while (str[i] != '\0') {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                lower_str[i] = str[i] + 32;  // Convert to lowercase
            } else {
                lower_str[i] = str[i];       // Keep character as is
            }
            i++;
        }
    */

    lower_str[strlen(str)] = '\0';  // Null-terminate the string

    cout << "The lower string: ";
    puts(lower_str);

    return 0;
}
