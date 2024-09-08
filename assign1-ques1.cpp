//assign 1 ques 1
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;
    string address;

    Student()
    {
        age = 0;
        name = "Unknown";
        address = "not given";
    }

    void setInfo(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void setInfo(string name, int age, string address)
    {
        this->name = name;
        this->age = age;
        this->address = address;
    }
};

int main()
{
    Student people[10];
    for (int i = 0; i < 10; i++)
    {
        string name;
        int age;
        string address;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        if (i % 3 == 0)
            people[i].setInfo(name, age);
        else
        {
            cout << "Enter address: ";
            cin >> address;
            people[i].setInfo(name, age, address);
        }
    }
}
