// 7- Average of Three Numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    float avg = (a + b + c) / 3.0;
    cout << "Average of three numbers is: " << avg << endl;
    return 0;
}