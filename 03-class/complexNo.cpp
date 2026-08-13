// 1-defining and displaying complex numbers
// adding call by object and return object
#include <iostream>
using namespace std;
class complexNumber
{
private:
    float real, imag;

public:
    void setComplexNumber(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    };
    void display();

    complexNumber add(complexNumber c)
    {
        complexNumber temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

void complexNumber::display() // defining instance member function outside class
{
    cout << real << " + " << imag << "i" << endl;
};

int main()
{
    complexNumber c1, c2, c3;
    float i, r;
    // cout << "Enter real and imaginary part of complex number: "; //lines for prev part
    // cin >> r >> i;//lines for prev part
    // code for call by object and return by obect
    c1.setComplexNumber(4, 4);
    c2.setComplexNumber(7, 8);
    c3 = c1.add(c2);
    c3.display();
};