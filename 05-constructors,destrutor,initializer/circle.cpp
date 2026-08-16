// 10-circle(contructor overloading)
#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;

public:
    Circle()
    {
        radius = 0;
    }
    Circle(int r)
    {
        radius = r;
    }
};