/**
    //----->Program.No - 16: Write a program to implement Binary Search
*/


/**
    //--------->Algo_Binary search (reema_c++-book):
    Binary search(A,Lower_Boundary, Upper_Boundery, Val, Pos)
    s1: (initialize) set Beg=Lower_Bound, End=Upper_Bound ,pos=-1
    s2: repeat s3  and step4 while beg<end
    s3:     set mid = (beg+end)/2
            if a[mid] = val, then
                pos=mid
                print pos
                go to step6

            if a[mid]> val then
                set end=mid-1
            else
                set beg = mid+1
            [end of if]
        [End of loop]

    s5:if pos =-1,then
        print ("value not present in array")
       [end of loop]

    s6:exit
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10], num, arrLen, pos=-1, bI, eI, mid, found=0;
    cout <<"Enter the array size:"; cin >>arrLen;

    cout <<"Enter the array elements:";
    for(int i=0; i<arrLen; i++){
        cin>>arr[i];
    }
    cout << endl <<"Enter the elem that need to search:";
    cin>>num;

    //-------> main Logic-Book wise:
    bI=0, eI= arrLen-1;
    while(bI<=eI){
        mid = (bI + eI)/2;
        if(arr[mid] == num){
            cout<<"present at position:"<<mid;
            found=1;
            break;
        }
        if(arr[mid]>num){
            eI=mid-1;
        }
        else{
            bI=mid+1;
        }
    }

    if(found==0){
            cout <<"Value not present";
    }
    return 0;
}



/**
    //-------------> Binary search through python:
    Iterative way, recursive and non recursive way (Both using function)



    1:iterative way:
    # Input the array from user
    arr = list(map(int, input("Enter sorted array elements (space-separated): ").split()))

    # Input the target element to search
    target = int(input("Enter the element to search: "))

    # Binary Search logic
    low = 0
    high = len(arr) - 1
    found = False

    while low <= high:
        mid = (low + high) // 2

        if arr[mid] == target:
            print(f"Element {target} found at index {mid}")
            found = True
            break
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    if not found:
        print("Element not found in the array")
    #-------------------------------------------------------->

    2:using function:
    def binary_search(arr, target):
        low = 0
        high = len(arr) - 1

        while low <= high:
            mid = (low + high) // 2

            if arr[mid] == target:
                return mid  # Found, return index
            elif arr[mid] < target:
                low = mid + 1
            else:
                high = mid - 1

        return -1  # Not found

    # Example usage
    arr = sorted([5, 2, 8, 3, 10, 1])
    target = 8

    index = binary_search(arr, target)
    if index != -1:
        print(f"Element {target} found at index {index}")
    else:
        print("Element not found")

    #----------------------------------------------------------->

    3:using function(recursive):
    def binary_search_recursive(arr, target, low, high):
        if low > high:
            return -1

        mid = (low + high) // 2

        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            return binary_search_recursive(arr, target, mid + 1, high)
        else:
            return binary_search_recursive(arr, target, low, mid - 1)

    # Example usage
    arr = sorted([7, 2, 4, 1, 9, 5])
    target = 4

    index = binary_search_recursive(arr, target, 0, len(arr) - 1)
    if index != -1:
        print(f"Element {target} found at index {index}")
    else:
        print("Element not found")

*/
