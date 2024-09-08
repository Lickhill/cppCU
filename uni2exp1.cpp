#include <iostream>
using namespace std;

class Unit2exp1
{
public:
    int arr[100];
    void insert();
    void deletions();
    void print(int size);
    int size;

    void get()
    {
        cout << "Enter the number of elements you want to enter:\n";
        cin >> size;

        cout << "Enter the array elements:\n";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
};

void Unit2exp1::insert()
{
    int num, index;
    cout << "Enter the number you want to insert (not 0):\n";
    cin >> num;
    cout << "Enter the index at which you want to insert:\n";
    cin >> index;

    for (int i = size; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index - 1] = num;

    print(++size);
}

void Unit2exp1::deletions()
{
    int index;
    cout << "Enter the index at which you want to delete:\n";
    cin >> index;
    for (int i = index - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    print(--size);
}

void Unit2exp1 ::print(int in)
{
    for (int i = 0; i < in; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    Unit2exp1 obj;
    obj.get();
    obj.insert();
    obj.deletions();
}