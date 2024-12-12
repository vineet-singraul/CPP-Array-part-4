#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 1, 3, 4, 1};

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; ++j)
        {
            if (arr[i] == arr[j] && arr[i]!=-1)
            {
                cout << "duplicate value is " << arr[i];
                arr[j] = -1;
                break;
            }
        }
    }

    return 0;
}
