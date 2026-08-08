// 3-calculating x raised to the power y
#include <iostream>
using namespace std;
int power(int, int);
int main()
{
    int x, y;
    cout << "Enter the base: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> y;
    cout << x << " raised to the power " << y << " is: " << power(x, y) << endl;
    return 0;
}
int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}
