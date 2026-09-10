#include <iostream>
class Circle
{
private:
    double radius;

public:
    void setRadius(double r)
    {
        radius = r;
    }
    double getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return 3.14 * radius * radius;
    }
};
class ThickCircle : public Circle
{
    double thickness;

public:
    void setThickness(double t)
    {
        thickness = t;
    }
    double getThickness()
    {
        return thickness;
    }
    double getArea()
    {
        double inArea = Circle::getArea();
        setRadius(getRadius() + thickness);
        double outArea = Circle::getArea();
        return outArea - inArea;
    }
};
int main()
{
    ThickCircle tc;
    tc.setRadius(9);
    tc.setThickness(2);
    std::cout << "Radius: " << tc.getRadius() << std::endl;
    std::cout << "Thickness: " << tc.getThickness() << std::endl;
    std::cout << "Area: " << tc.getArea() << std::endl;
    return 0;
}