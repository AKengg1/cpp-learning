#include <iostream>
using namespace std;

class Coordinate
{
private:
    int x, y;

public:
    // Default constructor
    Coordinate(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }

    // Overloading comma operator
    Coordinate operator,(Coordinate c)
    {
        return c;
    }

    // Overloading insertion operator <<
    friend ostream &operator<<(ostream &out, Coordinate c)
    {
        out << "(" << c.x << ", " << c.y << ")";
        return out;
    }

    // Overloading extraction operator >>
    friend istream &operator>>(istream &in, Coordinate &c)
    {
        cout << "Enter x and y: ";
        in >> c.x >> c.y;
        return in;
    }
};

int main()
{
    Coordinate c1, c2, c3;

    cout << "Enter coordinates for c1:\n";
    cin >> c1;

    cout << "Enter coordinates for c2:\n";
    cin >> c2;

    c3 = (c1, c2);

    cout << "\nc1 = " << c1;
    cout << "\nc2 = " << c2;
    cout << "\nc3 = " << c3;

    return 0;
}