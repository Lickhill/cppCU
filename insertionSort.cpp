#include <iostream>
using namespace std;

void printing(int arr[], int size);

void insertionsorting(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        cout << "Pass " << i << ": ";
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            cout << "Swapping of " << arr[j] << " and " << arr[j + 1] << "\n";
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        printing(arr, size);
        cout << "\n"
             << "-----------------------------------"
             << "\n";
    }
}

void printing(int arr[], int size)
{
    cout << "\n The sorted array is: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array";
    cin >> size;

    int arr[size];

    cout << "Enter the arrray elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertionsorting(arr, size);
    printing(arr, size);
}