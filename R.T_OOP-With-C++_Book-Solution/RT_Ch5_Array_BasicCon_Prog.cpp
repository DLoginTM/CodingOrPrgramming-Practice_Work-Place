//------->Just.Code_Execution
    //--------->This.File_Part.Of - Reema.Thareja_OOP.Through.C++



/*
    //-------->Note.Prog_1
    Generally, it's good programming practice to defining
    the size of array as a symbolic constant,
    Like---->
        #include<iostream.h>
        #define N 100; //-------->Here, n("variable") and 100("size of array")
        main(){
            int arr[N];
        }

*/



/*
    //-------->Note.Prog_2
    The size of the array can be specified using expression. However the components
    of the expression must be available of the expression when the program is compiled.
    Like---->
        #include<iostream.h>
        #define N 100; //-------->Here, n("variable") and 100("size of array")
        main(){
            int i=10;
            int arr[N+10], my_arr[i-5*10];
        }
*/



/*
    //---------->Semi_Program.1 : [Accessing elements of the array]
        //----------> set each elements of the array to '-1'
        int main (){
            int i, marks[10];
            for(i=0; i<10; i++){
                marks[i] = -1;
            }
        }
        //--->Output: code to initialize each
        element's of the array to -1.

        //-----> Diagram:
            [ ind-0 || ind-1 || ind-2 || ind-3 || ind-4 || ind-5 || ind-6 || ind-7 || ind-8 || ind-9 ]
    Value---> [ -1      -1      -1         -1      -1      -1        -1          -1      -1      -1
*/



//-------->Calculate the address of Array Element's :
    /*
        Address of data element's, A[K] = BA(A) + w(k - lower_Bound)
        Here, A = Array || K = index that have to calculate the address
              BA = Base_Address || w = word size of one elements in memory
              lower_bound = index of first element's.

    */



//--------->Storing values in array
    //---------> Initialization of array
    /*
        //----->Inputting_values
        int i, marks[10];
        for(i=0;i<10;i++){
            cin >> mark[i]; //---->"C++_Lang - format"
            //scanf("%d",&marks[i]);//---->"C_Lang - format"
        }
    */

    /*
        //----->Assaging_Values
        int i, marks[3] = 100;

        //------->Code to copy an array at athe individual
        element's level:

        int arr1[10], arr2[10];
        for(i=0;i<10;i++){
            mark[i] = arr1[i];
        }

        //------->Code to filling an array with even number:
        int i, arr[10];
        for(i=0;i<10;i++){
            arr[i] = i*2;
        }

    */


//---------------------------------------------------------->
                //------------>[Level_Up - p.1]

//------->Calculate the length
    //-----------> [ length = upper_bound - lower_bound + 1]



//------------->Operation that can be performed on array
    /*
        //----------------------->Operation.1 - Traversal

        //------>Algorithm for array traversal
        Step.1: [Initialize] Set I = lower_bound
        Step.2: Repeat steps 3 to 4 while I <= upper_bound
        Step.3: Apply Process to A[I]
        Step.4: Set I = I+1
                [End of Loop]
        Step.5: Exit


        //-------------->Understand Through Example:
        Assume that there  is an array "Marks[]", such that the index
        of an array specified the roll number of the student and the value
        of a particular element denote the marks obtain by the student.

        //--->Example: If it is given "marks[4] = 78", then the student whose
        roll number is '4' has obtain '78'marks in exam.
            i.Find the total number of students who have secured '80' or more
            ii.Print the roll number and marks of all the students who have got distinction:

        //------>Algorithm

                    Step.1: [Initialization] Set I = I+1
                    Step.2: Repeat for I = lower_bound to upper_bound
                            If marks[I] >= 80, Set count = count+1
                            [End of Loop]
                    Step.3: Exit
                            b) Step.1: [Initialization] Set I = I+1
                    Step.2: Repeat for I = lower_bound to upper_bound
                                    If marl[I] >= 75, Write:I, Marks[I]
                            [End of Loop]
                    Step.3: Exit
    */
