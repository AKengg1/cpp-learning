// 16-calculate HCF
#include <iostream>
using namespace std;
int hcf(int, int);
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcf(num1, num2) << endl;
    return 0;
}
int hcf(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}