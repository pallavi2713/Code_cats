//PROGRAM TO INTER-CHANGE ROWS
#include <iostream>
using namespace std;
 
int main() {
    int xsize, ysize, * swap;
    int row1, row2;
 
    cout << "Enter the size of matrix : ";
    cin >> ysize >> xsize;
    int ** matrix = new int*[ysize];
    for(int i = 0; i < ysize; i++) {
        matrix[i] = new int[xsize];
    }
    cout << "Enter the matrix\n";
    for(int i = 0; i < ysize; i++) {
        for(int j = 0; j < xsize; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Enter the rows to be interchanged : ";
    cin >> row1 >> row2;
    swap = matrix[row1 - 1];
    matrix[row1 - 1] = matrix[row2 - 1];
    matrix[row2 - 1] = swap;
    
        cout << "New Matrix\n";
    for(int i = 0; i < ysize; i++) {
        for(int j = 0; j < xsize; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}