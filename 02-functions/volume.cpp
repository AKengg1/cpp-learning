// 17-calculating volume of cuboid, cube and sphere using function overloading
#include <iostream>
using namespace std;

double volume(double length, double width, double height)
{
    return length * width * height;
}

double volume(double side)
{
    return side * side * side;
}

double volume(double radius)
{
    return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
}

int main()
{
    double length, width, height, side, radius;

    cout << "Enter length, width and height of cuboid: ";
    cin >> length >> width >> height;
    cout << "Volume of cuboid: " << volume(length, width, height) << endl;

    cout << "Enter side of cube: ";
    cin >> side;
    cout << "Volume of cube: " << volume(side) << endl;

    cout << "Enter radius of sphere: ";
    cin >> radius;
    cout << "Volume of sphere: " << volume(radius) << endl;

    return 0;
}