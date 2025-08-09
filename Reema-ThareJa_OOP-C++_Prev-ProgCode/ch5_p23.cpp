/**
    //----->Program.No - 23 (important)(code through paragraph statement) and
    for thinking ability improvement:

    In a class, there are 10 students. Each student is supposed to appear in
    three tests. Write a program using two dimensional array to print the marks
    obtained by each students in different subjects, total marks and average
    obtained by each student, and store the average of each student in a separate
    1d array , so that it can be used to calculate the class average.
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int marks[10][3];
    int total_marks[10] = {0};

    float class_Avg=0.0, total_Avg=0.0;
    float avg[10];


    //Input Data
    cout<<"\nEnter the data";
    for(int i=0; i<10; i++){
        cout<<"\nEnter the marks of "<<i<<" students in 3 subjects:";
        for(int j=0; j<3; j++){
            cin>>marks[i][j];
        }
    }


    //Calculate total marks of each students;
    for(int i=0; i<10; i++){
        for(int j=0; j<3; j++){
            total_marks[i] += marks[i][j];
        }
    }


    //calculate average of each students
    for(int i=0; i<10; i++){
        for(int j=0; j<3; j++){
            avg[i]=(float)total_marks[i]/3.0;
        }
    }


    //calculate class average
    for(int i=0; i<10; i++){
        total_Avg += avg[i];
    }
    class_Avg = (float)total_Avg/10.0;

    //display the data
    cout<<"\n\nStud no. \t Marks obtain in 3 sub: \t Total Marks \t Average";
    cout<<"\n\t*******************************************************************";
    for(int i=0; i<10; i++){
        cout<<"\n"<<i<<"\t\t";
        for(int j=0; j<3; j++){
            cout<<marks[i][j]<<" ";
        }
        cout<<"\t\t\t"<<total_marks[i]<<"\t\t"<<avg[i];
    }
    cout<<"\n\n class avg:"<<class_Avg;

    return 0;
}


/**
    //------------>Extra_Way:
    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main() {
        int marks[10][3];
        int total_marks[10] = {0};
        float avg[10], total_Avg = 0.0, class_Avg;

        // Input marks for each student
        cout << "\nEnter the marks of 10 students (3 subjects each):\n";
        for (int i = 0; i < 10; i++) {
            cout << "Student " << i + 1 << ":\n";
            for (int j = 0; j < 3; j++) {
                cout << "  Subject " << j + 1 << ": ";
                cin >> marks[i][j];
                total_marks[i] += marks[i][j];
            }
            avg[i] = total_marks[i] / 3.0;
            total_Avg += avg[i];  // Add to total for class average
        }

        class_Avg = total_Avg / 10.0;

        // Display result
        cout << "\n\nStud No.\tMarks (3 Sub)\t\tTotal\tAverage\n";
        cout << "-------------------------------------------------------------\n";
        for (int i = 0; i < 10; i++) {
            cout << setw(5) << i + 1 << "\t\t";
            for (int j = 0; j < 3; j++) {
                cout << setw(4) << marks[i][j] << " ";
            }
            cout << "\t" << setw(4) << total_marks[i];
            cout << "\t" << fixed << setprecision(2) << avg[i] << endl;
        }

        cout << "\nClass Average = " << fixed << setprecision(2) << class_Avg << endl;

        return 0;
    }

*/
