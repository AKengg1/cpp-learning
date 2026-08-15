#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    void showData()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c[5] = {
        Complex(2, 3),
        Complex(4, 5),
        Complex(6, 7),
        Complex(8, 9),
        Complex(10, 11)
    };

    for (int i = 0; i < 5; i++)
    {
        c[i].showData();
    }

    return 0;
}