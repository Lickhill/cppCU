#include <iostream>

using namespace std;

int main()
{
    int size, target;
    bool game = false;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target that is needed to be found in this array: ";
    cin >> target;

    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            cout << "Target found at index " << mid + 1 << endl;
            game = true;
            break;
        }
    }

    if (!game)
    {
        cout << "\nTarget not found sorry lil nigga" << endl;
    }
}