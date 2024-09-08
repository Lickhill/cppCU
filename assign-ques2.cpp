///assign 1 ques 2
#include <iostream>
#include <string>
using namespace std;

class programming
{
public:
    string str;

    // Constructor that takes a string parameter
    programming(string word)
    {
        str = word;
    }

    // Default constructor that doesn't take any parameters
   

    void function()
    {
        if (str != "")
        {
            cout << "I love " << str << "\n";
        }
        else
        {
            cout << "I love programming\n";
        }
    }
};

int main()
{
    string word;
    cout << "what do you love?\n";
    getline(cin, word);
    programming obj(word);
    obj.function();
    
    
}