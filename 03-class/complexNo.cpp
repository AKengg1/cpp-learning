// 1-defining and displaying complex numbers
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
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    complexNumber c1;
    float i, r;
    cout << "Enter real and imaginary part of complex number: ";
    cin >> r >> i;
    c1.setComplexNumber(r, i);
    c1.display();
}