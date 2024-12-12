#include <iostream>
using namespace std;

int main()
{
       int n;
    int sum = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];
    // int arrays[5];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    array[1]=20;

        for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }

}
