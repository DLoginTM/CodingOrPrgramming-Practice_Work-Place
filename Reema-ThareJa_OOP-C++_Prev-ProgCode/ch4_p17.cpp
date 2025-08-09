/**
    //----->Program.No - 17:
    Write a program to print the Fibonacci series using recursion.
*/


/**
    //---------> note:
    0 1 1 2 3 5 8 13 21 34 55 ... so on

    FIB(n) = {
             {  1, if n<2
                FIB(n-1)+FIB(n-2), otherwise
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//---->fibonacci function
/*
    //---->book prog/ wrong
    int fibbonacci(int num){
        if(num<=2)
            return 1;
        return(fibbonacci(num-1) + fibbonacci(num-2));
    }
*/


//----> Recursive Fibonacci function
int fibonacci(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(){
    int n; cout<<"\nEnter the number of term:"; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Fibonacci:" <<fibonacci(i) <<endl;
    }
}


/**
    //-------------->Using without function
    int main() {
        int n; cout << "\nEnter the number of terms: "; cin >> n;

        int t1 = 0, t2 = 1, nextTerm;
        cout << "Fibonacci Series: ";

        for (int i = 0; i < n; i++) {
            cout << t1 << " ";

            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        cout << endl;
        return 0;
    }
*/


/**
    //------------------>Python code:
        //------>with out function
    n = int(input("Enter the number of terms: "))
    a, b = 0, 1
    print("Fibonacci Series:", end=" ")

    for _ in range(n):
        print(a, end=" ")
        a, b = b, a + b

    //------------------------------------>
        //-----> using function
    def fibonacci_recursive(n):
        if n == 0:
            return 0
        elif n == 1:
            return 1
        else:
            return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2)

    # Main
    n = int(input("Enter number of terms: "))
    print("Fibonacci Series (Recursive):", end=" ")
    for i in range(n):
        print(fibonacci_recursive(i), end=" ")


    //------------------------------------>
        //-----> not using function

    def fibonacci_non_recursive(n):
        a, b = 0, 1
        for _ in range(n):
            print(a, end=" ")
            a, b = b, a + b

        #for _ in range(n):
        #    print(a, end=" ")
        #    temp = a     # Store current a
        #    a = b        # Shift a to b
        #    b = temp + b # Calculate next term

    # Main
    n = int(input("Enter number of terms: "))
    print("Fibonacci Series (Non-Recursive):", end=" ")
    fibonacci_non_recursive(n)
*/
