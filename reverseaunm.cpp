#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number to be reversed ";
    int n;
    cin >> n;

    int rem, rev = 0;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        rev = rev * 10 + rem;
    }

    cout << "The reverse is " << rev;

    return 0;
}