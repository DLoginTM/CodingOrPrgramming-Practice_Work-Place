/**
    //----->Program.No - 12: Write a program  to insert a number in an array
    that is already stored in ascending order.
*/


#include <iostream>
using namespace std;

int main(){
    int arr[10], arrayLen, setNum;
    cout << "Enter the number of your array element:"; cin>>arrayLen;

    cout << "Your elements are:";
    for(int i=0; i<arrayLen; i++){
        cin>>arr[i];
    }

    cout<<"Enter the number that you need to set:"; cin >> setNum;

    /*
        //--------->Logic For set the desire number: (Wrong_Logic/ code not run)
            //----------->book_logic
        for(int i=0; i<arrayLen; i++){
            if(arr[i] > setNum){
                for(int j = arrayLen-1; j>=i; j--){
                    arr[j+1] = arr[j];
                }
                arr[i] = setNum; break;
            }
        }
    */

    // Find the position to insert
    /**
        int i; for(i = arrayLen - 1; i >= 0 && arr[i] > setNum; i--) {
            arr[i + 1] = arr[i]; // shift right
        }
        arr[i + 1] = setNum; // insert number
        arrayLen++; // increase size
    */

    int insertPos = 0;
    for (int i = arrayLen - 1; i >= 0 && arr[i] > setNum; i--) {
        arr[i + 1] = arr[i]; // shift right
        insertPos = i;       // remember where to insert
    }
    arr[insertPos] = setNum;
    arrayLen++;

    cout << "after insertion:";
    for(int i=0; i<arrayLen; i++){
        cout<<" "<<arr[i];
    }
}



/**
    //------------------>GpT_Code.2
    #include <iostream>
    using namespace std;

    int main(){
        int arr[11]; // increased to 11 to allow 1 extra insert
        int arrayLen, setNum;
        cout << "Enter the number of your array elements: ";
        cin >> arrayLen;

        cout << "Your elements are: ";
        for(int i = 0; i < arrayLen; i++){
            cin >> arr[i];
        }

        cout << "Enter the number that you need to insert: ";
        cin >> setNum;

        int insertPos = arrayLen; // default to last
        for(int i = 0; i < arrayLen; i++){
            if(arr[i] > setNum){
                insertPos = i;
                break;
            }
        }

        // shift elements to right from insertPos
        for(int j = arrayLen - 1; j >= insertPos; j--){
            arr[j + 1] = arr[j];
        }

        // insert the new number
        arr[insertPos] = setNum;
        arrayLen++;

        cout << "After insertion:";
        for(int i = 0; i < arrayLen; i++){
            cout << " " << arr[i];
        }
    }

*/
