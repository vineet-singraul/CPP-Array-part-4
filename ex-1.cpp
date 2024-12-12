#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];
    int arrays[5];
    int largest=0; 


    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
        sum += array[i];

        if ( array[i] > largest)
        {
            largest = array[i];
        }
    }

    cout << "Sum is: " << sum << endl;

    cout << "The array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Largest value is: " << largest << endl;

    return 0;
}
