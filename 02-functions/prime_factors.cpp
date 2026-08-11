//11-prime factors of a number
#include <iostream>
using namespace std;
void primeFactors(int);
int prime(int);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Prime factors of " << num << " are: ";
    primeFactors(num);
    return 0;
}
int prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void primeFactors(int n)
{   int i=2;
    while (i<= n){
        if (n%i==0&&prime(i)){
            cout<<i<<", ";
            // n=n/i;
        }
            i++;

    }
}