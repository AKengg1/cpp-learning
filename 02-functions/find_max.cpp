// 9-Finding maximum of two numbers using function overloading
#include <iostream>
using namespace std;

int max(int, int);
float max(float, float);

int main()
{
    int a, b;
    float x, y;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Maximum of " << a << " and " << b << " is: " << max(a, b) << endl;
    cout << "Enter two floating point numbers: ";
    cin >> x >> y;
    cout << "Maximum of " << x << " and " << y << " is: " << max(x, y) << endl;
    return 0;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}
float max(float x, float y)
{
    return (x > y) ? x : y;
}