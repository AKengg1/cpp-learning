//4-checking given number is fibonacci or not
#include <iostream>
#include <cmath>
using namespace std;
int checkFibonacci(int);
int root(int);
int main()
{
    int num;
cout<< "Enter a number: ";
cin>>num;

    if (checkFibonacci(num))
        cout << num << " is a Fibonacci number." << endl;
    else
        cout << num << " is not a Fibonacci number." << endl;
    return 0;
}
int checkFibonacci(int n)
{
    int x = 5 * n * n + 4;
    int y = 5 * n * n - 4;

    return (root(x) || root(y));
}

int root(int n)
{
    int s = sqrt(n);
    return (s * s == n);
}