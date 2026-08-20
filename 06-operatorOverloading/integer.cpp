#include <iostream>
using namespace std;

class Integer
{
private:
    int x;

public:
    Integer(int n = 0)
    {
        x = n;
    }

    // Friend logical NOT operator
    friend bool operator!(Integer i);

    // Friend equality operator
    friend bool operator==(Integer i1, Integer i2);
};

// Definition of !
bool operator!(Integer i)
{
    return i.x == 0;
}

// Definition of ==
bool operator==(Integer i1, Integer i2)
{
    return i1.x == i2.x;
}

int main()
{
    Integer a(10), b(10), c(0);

    if (!a)
        cout << "a is zero" << endl;
    else
        cout << "a is not zero" << endl;

    if (!c)
        cout << "c is zero" << endl;
    else
        cout << "c is not zero" << endl;

    if (a == b)
        cout << "a and b are equal" << endl;
    else
        cout << "a and b are not equal" << endl;

    if (a == c)
        cout << "a and c are equal" << endl;
    else
        cout << "a and c are not equal" << endl;

    return 0;
}