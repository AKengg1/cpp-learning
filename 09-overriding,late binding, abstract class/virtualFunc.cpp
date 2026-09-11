#include <iostream>
#include <string>
using namespace std;

class Shape
{
private:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }

    void displayName()
    {
        cout << "Shape name is: " << name << endl;
    }

    virtual void area() = 0;   // Pure virtual function
};

class Rectangle : public Shape
{
private:
    int length;
    int breadth;

public:
    void setData(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of rectangle is: " << length * breadth << endl;
    }
};

class Square : public Shape
{
private:
    int side;

public:
    void setData(int s)
    {
        side = s;
    }

    void area()
    {
        cout << "Area of square is: " << side * side << endl;
    }
};

int main(){
    Rectangle r;
    r.setName("Rectangle");
    r.setData(10, 5);
    r.displayName();
    r.area();

    Square s;
    s.setName("Square");
    s.setData(5);
    s.displayName();
    s.area();

    return 0;
}