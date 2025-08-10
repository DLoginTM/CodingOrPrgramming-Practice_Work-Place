/**
    //----->Program.No - 16:
    wap  to calculate exp(x,y) using recursive function
*/


/**
    //---------> note:
    to find x^y, the base case would be when y=0, as we we know
    that any number raise to the power 0 is 1.

    So the general formula is:

    EXP(x, y) = {
                {1, if y == 0
                 x*EXP(x^y-1) otherwise

    exp_rec(2,4) = 2 * exp_rec(2,3)
        exp_rec(2,3) = 2 * exp_rec(2,2)
            exp_rec(2,2) - 2 * exp_rec(2,1)
                exp_rec(2,1) = 2 * exp_rec(2,0)
                    exp_rec(2,0) = 1
                exp_rec(2,1) = 2*1=2
            exp_rec(2,2) = 2*2=4
            exp_rec(2,3) = 2*3=8
        exp_rec(2,4) = 2*8=16
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//------>exp function
int exp_rec(int x, int y){
    if(y==0){
        return 1;
    }
    else{
        return (x * exp_rec(x, y-1));
    }
}

// Non-recursive function to compute x^y
int exp_iter(int x, int y) {
    int result = 1;

    for (int i = 1; i <= y; i++) {
        result *= x; // Multiply x, y times
    }

    return result;
}

int main(){
    int num1, num2, res;
    cout<<"\nEnter the two number"; cin>>num1>>num2;
    res =exp_rec(num1, num2);
    cout<<"result:"<<res;

    return 0;
}



/**
    ✅ 1. Without Using a Function (Iterative Only)
        x = int(input("Enter base: "))
        y = int(input("Enter exponent: "))

        result = 1
        for _ in range(y):
            result *= x

        print(f"Result: {x}^{y} = {result}")


    ✅ 2. Using Function
    (a) Non-Recursive Function
    def exp_iter(x, y):
        result = 1
        for _ in range(y):
            result *= x
        return result

    # Main
    x = int(input("Enter base: "))
    y = int(input("Enter exponent: "))
    print(f"Result: {x}^{y} = {exp_iter(x, y)}")


    (b) Recursive Function
    def exp_rec(x, y):
        if y == 0:
            return 1
        else:
            return x * exp_rec(x, y - 1)

    # Main
    x = int(input("Enter base: "))
    y = int(input("Enter exponent: "))
    print(f"Result: {x}^{y} = {exp_rec(x, y)}")
*/
