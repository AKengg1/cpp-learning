// 5-member functions used for complex numbers
#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setData(int, int);
    void showData();
    Complex add(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
    Complex substract(Complex c)
    {
        Complex temp;
        temp.a = a - c.a;
        temp.b = b - c.b;
        return temp;
    }
    Complex multiply(Complex c)
    {
        Complex temp;
        temp.a = a * c.a - b * c.b;
        temp.b = a * c.b + b * c.a;
        return temp;
    }//good code beyotch
};
void Complex::setData(int x, int y)
{
    a = x;
    b = y;
};
void Complex::showData()
{
    cout << a << " + " << b << "i" << endl;
};
int main()
{
    Complex c1, c2, c3, c4, c5;
    c1.setData(2, 3);
    c2.setData(4, 1);
    c3 = c1.add(c2);
    c4 = c1.substract(c2);
    c5 = c1.multiply(c2);
    cout << "Add ";
    c3.showData();
    cout << "Substract ";
    c4.showData();
    cout << "Multiply ";
    c5.showData();
    return 0;
}