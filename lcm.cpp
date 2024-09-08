#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    hcf(b, b % a);
}

int main()
{
    cout << "Enter the first number ";
    int a;
    cin >> a;
    cout << "Enter the second number ";
    int b;
    cin >> b;

    int lcm = 1;
    for (int i = 1; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    cout << "the lcm of both the numbers is " << lcm << "\n";
    cout << "the lcm of both the numbers is " << hcf(a, b) / (a * b);
}