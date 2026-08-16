// 8-date class, initailising members using initializers
#include <iostream>
using namespace std;
class Date
{
private:
    int d, m, y;

public:
    Date(int a, int b, int c) : d(a), m(b), y(c) {}
    void display()
    {
        cout << "Date: " << d << "-" << m << "-" << y << endl;
    }
};
int main()
{
    Date date1(16, 8, 2026);
    date1.display();

    return 0;
}
