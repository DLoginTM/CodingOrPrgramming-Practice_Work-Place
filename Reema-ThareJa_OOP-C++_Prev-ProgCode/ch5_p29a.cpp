#include <iostream>
using namespace std;

int main() {
    int array1[2][2][2];

    // Input
    cout << "\nEnter the elements of the matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "array[" << i << "][" << j << "][" << k << "] = ";
                cin >> array1[i][j][k];
            }
        }
    }

    // Improved Output
    cout << "\nThe 3D Matrix is:\n";
    for (int i = 0; i < 2; i++) {
        cout << "\nLayer " << i << ":\n";
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << array1[i][j][k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
