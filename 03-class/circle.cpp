// 4-class for circle
#include <iostream>
using namespace std;
class Circle
{
private:
    int radius;

public:
    void setRadius()
    {
        cout << "Enter radius of circle" << endl;
        cin >> radius;
    }
    void getRadius()
    {
        cout << "Radius of circle" << radius << endl;
    }
    float area() { return 3.14 * radius * radius; }
    float circumference() { return 2 * 3.14 * radius; }
};

int main()
{
    Circle c;
    c.setRadius();
    c.getRadius();
    cout << "Area is " << c.area() << " and Circumference is " << c.circumference() << endl;
    return 0;
}