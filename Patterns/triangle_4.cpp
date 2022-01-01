/*

Output:
========

*   *   *   *   *   
    *   *   *   *   
        *   *   *   
            *   *   
                *
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    int n = 0, row = 0, star = 0, space = 0;
    cin >> n;
    /* Outer most loop controls the number of rows*/
    for (row = 0; row < n; row++) {
        /* This loop takes care of spaces before printing star */
        for (space = 0; space < row; space++) {
            cout << "\t";
        }

        /* This loop takes care of printing stars after spaces */
        for (star = 0; star < n - row; star++) {
            cout << "*\t";
        }
        cout << endl;
    }
    return 0;
}
