#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    int roll;
    float marks[5];
};

class likhil : public student
{
public:
    string name = "Likhil";
};

class avg : public likhil
{
public:
    int sum = 0;
    void get()
    {

        cout << "Enter the roll number of " << this->name << "\n";
        cin >> this->roll;
        for (int i = 0; i < 5; i++)
        {
            cout << "ENter the marks of subject " << i + 1 << " ";
            cin >> this->marks[i];
            sum += this->marks[i];
        }
    }
};

int main()
{
    avg obj;

    obj.get();

    cout << obj.name << " " << obj.roll << " scored " << obj.sum / 5;
}