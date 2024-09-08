// An IOT device collects temperature readings from various sensors in real time.
// these readings need to  be sorted efficienty to monitor temperature change and trigger alerts when necassary.
// choose an appropriate sortingtechnique for this scenerio

#include <iostream>
using namespace std;

int sorting(float arr[], int n, int left, int right)
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

void quicksort(float arr[], int n, int left, int right)
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
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    float arr[size];

    float threshold;
    cout << "Enter the threshold temperature: ";
    cin >> threshold;

    cout << "Enter the temperatures\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter temperature value " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "The sorted temperatures are(bubble sort)\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "The sorted temperatures are(quick sort)\n";
    quicksort(arr, size, 0, size - 1);

    if (threshold <= arr[size - 1])
    {
        cout << "\nHIGH TEMPERATURE. " << arr[size - 1] << " ALERT!\n";
    }

    return 0;
}