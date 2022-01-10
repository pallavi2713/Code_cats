// C++ code to swap the element of first and last column and display the result
#include <iostream>
using namespace std;
 
#define n 4
 
void swap(int m[][n])
{
    for (int i = 0; i < n; i++) {
        int t = m[i][0];
        m[i][0] = m[i][n - 1];
        m[i][n - 1] = t;
    }
}
 

int main()
{
    int m[n][n] = { { 8, 2, 9, 6 },
                    { 4, 7, 26, 5 },
                    { 3, 2, 11, 8 },
                    { 9, 0, 2, 7 } };
 
    swap(m);
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}