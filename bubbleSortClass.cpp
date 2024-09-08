#include <iostream>
using namespace std;

class BubbleSort
{
public:
    int size = 0;

    void getSize()
    {
        cout << "Enter the size of the array";
        cin >> size;
    }

    void getEle()
    {
        int arr[size];
        cout << "Enter the array elements\n";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        Bubblesort(arr);
    }

    void Bubblesort(int arr[])
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
        print(arr);
    }

    void print(int arr[])
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "\t";
        }
    }
};
int main()
{
    BubbleSort obj;
    obj.getSize();
    obj.getEle();
}