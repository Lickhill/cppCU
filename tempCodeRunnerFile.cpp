#include <iostream>
using namespace std;

void transformArray(int *input, int size, int *output)
{
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            output[i] = 1 * input[i + 1];
        }
        else if (i == size - 1)
        {
            output[i] = 1 * input[i - 1];
        }
        else
        {
            output[i] = input[i - 1] * input[i + 1];
        }
    }
}

int main()
{
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    int input[size];

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    int output[size];

    transformArray(input, size, output);

    cout << "Transformed Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }
    cout << "\n";

    return 0;
}