#include <iostream>
using namespace std;

class BinarySearch
{
public:
    int size, target;
    bool game;

    void getSize()
    {
        cout << "Enter the size of the array";
        cin >> size;
    }

    void setArray()
    {
        int arr[size];
        getElements(arr);
        targetting();
        finding(arr);
    }

    void getElements(int arr[])
    {
        cout << "Enter the array elements";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    void targetting()
    {
        cout << "Enter the target that is needed to be found in this array";
        cin >> target;
    }

    void finding(int arr[])
    {
        int start = 0;
        int end = size - 1;
        while (start < end)
        {
            int mid = end - (start + end) / 2;
            if (arr[mid] == target)
            {
                game = true;
                cout << "Target found at index " << mid;
                break;
            }
            else if (arr[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        if (!game)
        {
            cout << "Target not found. sorry nigga";
        }
    }
};

int main()
{
    BinarySearch obj;
    obj.getSize();
    obj.setArray();
}