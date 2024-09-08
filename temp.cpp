#include <iostream>
#include <vector>
using namespace std;

void function(vector<int> &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i + 1] != vec[i] + 1)
        {
            cout << "The number missing is " << vec[i] + 1 << "\n";
            break;
        }
    }
}

int main()
{
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    function(arr);

    return 0;
}