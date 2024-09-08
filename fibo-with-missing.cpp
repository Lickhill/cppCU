#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number till where you need the Fibonacci series: ";
    cin >> n;

    bool arr[n];

    int a = 0, b = 1, c = a + b;
    arr[0] = true;
    arr[1] = true;
    cout << a << " " << b;
    while (c <= n)
    {
        arr[c] = true;
        cout << " " << c;
        a = b;
        b = c;
        c = a + b;
    }

    cout << "\nThe missing numbers are: \n";

    for (int i = 0; i < n + 1; i++)
    {
        if (!arr[i])
        {
            cout << " " << i;
        }
    }

    return 0;
}