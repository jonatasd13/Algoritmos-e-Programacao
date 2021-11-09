#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int b[2][7] = {{1, 2, 3, 4, 5, 6, 7}, {11, 12, 13, 14, 15, 16, 17}};

    cout << setw(3) << b[0][0];
    cout << setw(3) << b[0][1];
    cout << setw(3) << b[0][2];
    cout << setw(3) << b[0][3];
    cout << setw(3) << b[0][4];
    cout << setw(3) << b[0][5];
    cout << setw(3) << b[0][6] << endl;
    cout << setw(3) << b[1][0];
    cout << setw(3) << b[1][1];
    cout << setw(3) << b[1][2];
    cout << setw(3) << b[1][3];
    cout << setw(3) << b[1][4];
    cout << setw(3) << b[1][5];
    cout << setw(3) << b[1][6];
    return 0;
}

