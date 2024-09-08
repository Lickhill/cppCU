#include <iostream>
using namespace std;

class AllSorting
{
public:
    int size = 0;

    void getSize()
    {
        cout << "Enter the size of the array";
        cin >> size;
        getEle();
    }

    void getEle()
    {
        int arr[size];
        cout << "Enter the array elements";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << "Choose a number: \n 1 for bubble sort \n 2 for selection sort \n 3 for insertion sort\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            bubbleSort(arr);
            break;
        case 2:
            selectionSort(arr);
            break;
        case 3:
            insertionSort(arr);
            break;
        default:
            cout << "Invalid choice";
        }
    }

    void selectionSort(int arr[])
    {
        int min = 0;
        for (int i = 0; i < size; i++)
        {
            min = i;
            for (int j = i; j < size; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        printing(arr);
    }

    void bubbleSort(int arr[])
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        printing(arr);
    }

    void insertionSort(int arr[])
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
            printing(arr);
        }
    }

    void printing(int arr[])
    {
        cout << "The sorted array is";
        for (int i = 0; i < size; i++)
        {
            cout << " " << arr[i] << "";
        }
    }
};

int main()
{
    AllSorting obj;
    obj.getSize();
    return 0;
}