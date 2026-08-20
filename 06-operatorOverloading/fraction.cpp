// 4-class for fraction
#include <iostream>
using namespace std;
long hcf(long a, long b)
{
    long h;
    for (h = a < b ? a : b; h >= 1; h--)
        if (a % h == 0 && b % h == 0)
            return h;
}
class fraction
{
    long numerator, denominator;

public:
    fraction(long n = 0, long d = 0)
    {
        numerator = n;
        denominator = d;
    }
    fraction operator+(fraction &f)
    {
        fraction temp;
        temp.numerator = numerator * f.denominator + f.numerator * denominator;
        temp.denominator = denominator * f.denominator;
        long h = hcf(temp.numerator, temp.denominator);
        temp.numerator /= h;
        temp.denominator /= h;
        return temp;
    }
    bool operator<(fraction &f)
    {
        return numerator * f.denominator < f.numerator * denominator;
    }

  
};
int main()
{
    fraction f1(2, 3);
    fraction f2(3, 4);

    fraction f3 = f1 + f2;

    cout << "Fractions added successfully." << endl;

    if (f1 < f2)
        cout << "f1 is smaller than f2" << endl;
    else
        cout << "f1 is not smaller than f2" << endl;

    return 0;
}
