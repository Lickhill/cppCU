#include <iostream>
using namespace std;

class LinearSearch
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
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == target)
            {
                game = true;
                cout << "Target found at index " << i;
                break;
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
    LinearSearch obj;
    obj.getSize();
    obj.setArray();
}