// 1-print all prime numbers between two given numbers
#include <iostream>
using namespace std;
int isPrime(int);
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Prime numbers between " << num1 << " and " << num2 << " are: ";
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i))
            cout << i << ", ";
    }
    return 0;
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}