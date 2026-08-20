// 1-defining +,-,*,==, pre-increment and post-increment operators for complex number class
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex operator+(Complex &c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-(Complex &c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    Complex operator*(Complex &c)
    {
        Complex temp;
        temp.real = real * c.real - imag * c.imag;
        temp.imag = real * c.imag + imag * c.real;
        return temp;
    }

    bool operator==(Complex &c)
    {
        return real == c.real && imag == c.imag;
    }

    // Pre-increment
    Complex operator++()
    {
        ++real;
        ++imag;
        return *this;
    }

    // Post-increment
    Complex operator++(int)
    {
        Complex temp = *this;
        real++;
        imag++;
        return temp;
    }

    friend Complex operator-(Complex);

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator-(Complex a){
    Complex temp;
    temp.real=-a.real;
    temp.imag=-a.imag;
    return temp;
}

// overloading operators as a friend
//unbox and check
// class Complex
// {
// private:
//     int real, imag;

// public:
//     Complex() : real(0), imag(0) {}
//     Complex(int real, int imag) : real(real), imag(imag) {}
//     friend Complex operator+(Complex &, Complex &);
//     friend Complex operator-(Complex &, Complex &);
//     friend Complex operator*(Complex &, Complex &);
// };
// Complex operator+(Complex &a, Complex &b)
// {
//     Complex temp;
//     temp.real = a.real + b.real;
//     temp.imag = a.imag + b.imag;
//     return temp;
// }
// Complex operator-(Complex &a, Complex &b)
// {
//     Complex temp;
//     temp.real = a.real - b.real;
//     temp.imag = a.imag - b.imag;
//     return temp;
// }
// Complex operator*(Complex &a, Complex &b)
// {
//     Complex temp;
//     temp.real = a.real * b.real - imag * b.imag;
//     temp.imag = real * b.imag + imag * b.real;
//     return temp;
// }

int main()
{
    Complex c1, c2, c3, c4, c5,c;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;

    cout << "\nAddition: ";
    c3.display();

    cout << "Subtraction: ";
    c4.display();

    cout << "Multiplication: ";
    c5.display();

    if (c1 == c2)
        cout << "Complex numbers are equal." << endl;
    else
        cout << "Complex numbers are not equal." << endl;

    // Pre-increment
    Complex c6 = ++c1;

    cout << "\nAfter pre-increment, c1: ";
    c1.display();

    cout << "Returned value: ";
    c6.display();

    // Post-increment
    Complex c7 = c1++;

    cout << "\nReturned value from post-increment: ";
    c7.display();

    cout << "After post-increment, c1: ";
    c1.display();

    c=-c1;
    cout<<"After negation: "
    c.display();

    return 0;
}