// 5-pascals triangle
#include <iostream>
using namespace std;
void pascal(int);
long long factorial(int);
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    pascal(n);
    return 0;
}

void pascal(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
        }
        cout << endl;
    }
}
long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}