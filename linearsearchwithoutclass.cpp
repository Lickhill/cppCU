#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array\n";
    cin >> size;

    int arr[size];

    cout << "Enter the array elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;
    bool game = false;
    cout << "Enter the target that is needed to be found in this array\n";
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Target found at index " << i;
            game = true;
            break;
        }
    }
    if (!game)
    {
        cout << "Target not found.";
    }
}