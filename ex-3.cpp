#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "Enter number of rows (x): ";
    cin >> x;
    cout << "Enter number of columns (y): ";
    cin >> y;
    cout << "Enter number depth (z): ";
    cin >> z;

    int array[x][y][z];

    cout << "Enter the elements of the 3D array:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << "Enter element at position [" << i + 1 << "][" << j + 1 << "][" << k + 1 << "]: ";
                cin >> array[i][j][k];
            }
        }
    }

    cout << "The 3D array is:\n";
    for (int i = 0; i < x; i++)
    {
        cout << "Layer " << i + 1 << ":\n";
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << array[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
