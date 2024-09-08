#include <iostream>
using namespace std;

// Corrected function signature
void function(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] != arr[i] + 1)
        {
            cout << "The number missing is " << arr[i] + 1 << "\n";
            break;
        }
    }
}

int main()
{
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    int arr[size];

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    function(arr, size);

    return 0;
}