#include <iostream>
using namespace std;

class mensuration
{
public:
    int l, b, h;
};

int main()
{
    mensuration cuboid;
    mensuration cube;

    cout << "Enter the length of cuboid:";
    cin >> cuboid.l;
    cout << "Enter the breadth of cuboid";
    cin >> cuboid.b;
    cout << "Enter the height of cuboid";
    cin >> cuboid.h;

    cout << "The voulume of the cuboid is " << cuboid.l * cuboid.b * cuboid.h << "\n";

    cout << "Enter the length of cube:";
    cin >> cube.l;
    cout << "Enter the breadth of cube";
    cin >> cube.b;
    cout << "Enter the height of cube";
    cin >> cube.h;

    cout << "The voulume of the cube is " << cube.l * cube.b * cube.h;
}