/*
    ******************----->NOTE<----******************

    //-------->Concept of "Josephus_Problem",
                ---->(String and LinkedListConcept Related.)

    In Josephus problem, 'n' people stand in a circle waiting to be executed.
    he counting starts at some point in the circle and proceeds in a
    specific direction around the circle.

    In each step, a certain number of people are skipped and the next
    person is executed or eliminated.

    The elimination of people makes the circle smaller and smaller.
    In the last step, only one person remains and is declared
    the "winner".

            if there are 'n' number of people and a number 'k' which
            indicates that 'k -1' I people are skipped and the 'k'th'
            person in the circle is eliminated, then the problem is
            to choose a position in the initial circle so that the
            given person becomes the winner.


    In my remark, it's logic may be similar to "passing-the-ball" game.
*/


/**
        //---------->Understand through example:
        If there are five (n) people and every second (k) persons
        eliminated, then first the person at position two is eliminated
        followed by the person at position four, followed by person
        at position one, and finally, the person a position five is
        eliminated. Therefore, the person at position three becomes
        the winner (refer to Fig. C3.1). Try the same process with
        n =7 and k = 3. You will find that person at position four
        is the winner. The elimination goes in the sequence
        of 3, 6, 2, 7, 5, and 1.


        Dry run:
        'n' = 5 (total)
        'k' = 2'nd (person eliminated)

        5 people---> 1  2  3  4  5

        elimination iteration, in a specific order:
            initial sequence: 1  2  3  4  5
            s.1---> 2nd-Position = 2 = eliminated
            after elimination, sequence: 1, 3, 4, 5

            initial sequence: 1  3  4  5
            s.2---> 2nd-Position = 4 = eliminated
            after elimination, sequence: 1, 3, 5

            initial sequence: 1  3  5
            s.3---> 2nd-Position = 1 = eliminated
            after elimination, sequence: 3, 5

            initial sequence: 3  5
            s.3---> 2nd-Position = 5 = eliminated
            after elimination, sequence: 3

            So, after elimination, winner is ---> '3'.


        After every 2nd position eliminated sequence
        as final sequence: 2, 4, 1, 5, 3


        2nd.Experimental_Dry-Run:
        --------------------------

        'n' = 7 (total)
        'k' = 3'rd (person eliminated)

        7 people---> 1  2  3  4  5 6 7

        elimination iteration, in a specific order:
            initial sequence: 1  2  3  4  5 6 7
            s.1---> 3rd-Position =  = eliminated
            after elimination, sequence:

            initial sequence:
            s.2---> 3rd-Position =  = eliminated
            after elimination, sequence:

            initial sequence:
            s.3---> 3rd-Position =  = eliminated
            after elimination, sequence:

            initial sequence:
            s.3---> 3rd-Position =  = eliminated
            after elimination, sequence:

            So, after elimination, winner is ---> ''.


        After every 3rd position eliminated sequence
        as final sequence:


*/


/*
    //---------------------------->
    Program.1: Use Josephus problem that finds solution
    using a circular linked list.
*/

#include <iostream>
//------->Extra_Header
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

//--------->Creating a Node:
struct node{
    int player_id;
    struct node *next;
};
struct node *start, *ptr, *new_Node;

int main(){
    int len_N, k, count_Num;

    cout<<"Enter the number of players:"; cin>>len_N;
    cout<<"Enter the value of K(every kth player gets eliminated):";
    cin>>k;


    // Create circular linked list containing all the players
    start = new node;
    start ->player_id=1;
    ptr=start;

    int i;
    for(i=2; i<=len_N; i++){
        new_Node = new node;
        ptr->next = new_Node;
        new_Node->player_id = i;
        new_Node->next=start;
        ptr=new_Node;
    }

    for(count_Num = len_N; count_Num>1; count_Num--){
        for(i=0; i<k-1; ++i){
            ptr = ptr->next;
        }
        // Remove the eliminated player from the circular linked list.
        ptr->next = ptr->next->next;
    }

    cout<<"The WINNER is Player:"<< ptr->player_id;

    getch();
    return 0;
}

