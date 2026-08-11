// 12-calculate LCM of 3 numbers
#include <iostream>
using namespace std;
int lcm(int, int, int);
int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "LCM of " << a << ", " << b << ", " << c << " is: " << lcm(a, b, c) << endl;
    return 0;
}
int lcm(int a, int b, int c)
{
    int lcm = 1;
    for (int i = 2; i <= a || i <= b || i <= c; i++)
    {
        while (a % i == 0 || b % i == 0 || c % i == 0)
        {
            lcm *= i;
            if (a % i == 0)
                a /= i;
            if (b % i == 0)
                b /= i;
            if (c % i == 0)
                c /= i;
        }
    }               
    return lcm;
}