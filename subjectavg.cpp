// WAP to find average marks of five subjects of a student in a class.
#include <iostream>
using namespace std;

int main()
{
    int subjects[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the marks of subject" << i + 1 << ": ";
        cin >> subjects[i];
        sum += subjects[i];
    }

    cout << "The average of all the subjects is: " << sum / 5;
}