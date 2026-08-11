// 2- highest value in a digit
#include <iostream>
using namespace std;
inline int highestDigit(int);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The highest digit in " << num << " is: " << highestDigit(num) << endl;
    return 0;
}
int highestDigit(int n)
{
    int highest = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit > highest)
            highest = digit;
        n /= 10;
    }
    return highest;
}