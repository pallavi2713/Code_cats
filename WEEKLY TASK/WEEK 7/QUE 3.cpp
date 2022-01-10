// C++ Program to Store value entered by user in three dimensional array and display it.

#include <iostream>
using namespace std;

int main() {
   
    int arr[2][3][2] = {
                            {
                                {1, 2},{3, 2}, {5, 9}
                            }, 
                            {
                                {7, 8},{9, 10},{11, 12}
                            }
                        };

       for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "array[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}