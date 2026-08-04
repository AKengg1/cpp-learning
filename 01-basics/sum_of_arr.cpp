//10-sum of elements of an array of size 10
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int sum = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    cout << "Sum of 10 numbers is: " << sum << endl;
    return 0;
}