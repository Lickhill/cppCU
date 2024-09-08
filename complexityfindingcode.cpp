#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, fn;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the power of the function: ";
    cin >> fn;

    double logValue = log(a) / log(b);

    int hn = fn - ceil(logValue);

    if (hn < 0)
    {
        cout << "The complexity is n raised to the power " << logValue << endl;
    }
    else
    {
        cout << "The complexity is n raised to the power " << logValue + hn << endl;
    }

    return 0;
}
