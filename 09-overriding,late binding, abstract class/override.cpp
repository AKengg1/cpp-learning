#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    void setData(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
    void input()
    {
        cout << "Enter a and b: ";
        cin >> a >> b;
        cout << endl;
    }
};

class B : public A
{
private:
    int c;

public:
    void setData(int x = 0, int y = 0, int z = 0)
    {
        A::setData(x, y);
        c = z;
    }
    void showData()
    {
        A::showData();
        cout << "c=" << c << endl;
    }
    void input()
    {
        A::input();
        cout << "Enter c: ";
        cin >> c;
        cout << endl;
    }
};