// 9- Maximum of Two Numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "Greater number is " << a << endl;
    }
    else
    {
        cout << "Greater number is " << b << endl;
    }

    return 0;
}