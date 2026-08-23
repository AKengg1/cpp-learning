// 2-Complex class
#include <iostream>
#include <string>
using namespace std;
class Complex
{
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void showData()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

void displayComplex(){
    Complex *p =new Complex;
    p->setData(5,3);
    p->showData();

    delete p;
}
int main()
{
    displayComplex();

    return 0;
}