#include <iostream>
using namespace std;

int sorting(int arr[], int n, int left, int right)
{
    int i = left + 1, j = right;
    int pivot = left;

    while (i < j)
    {

        while (i < n && arr[i] <= arr[pivot])
        {
            i++;
        }

        while (j >= 0 && arr[j] > arr[pivot])
        {
            j--;
        }

        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;

    return j;
}

void quicksort(int arr[], int n, int left, int right)
{
    if (left < right)
    {
        int pivot = sorting(arr, n, left, right);
        quicksort(arr, n, left, pivot - 1);
        quicksort(arr, n, pivot + 1, right);
    }
}

int main()
{
    int arr[] = {3, 2, 5, 3, -4, 45, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, n, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}