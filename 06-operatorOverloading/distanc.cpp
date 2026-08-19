#include <iostream>
using namespace std;

class Distance
{
    int km, m, cm;

public:
    Distance(int km = 0, int m = 0, int cm = 0)
        : km(km), m(m), cm(cm) {}

    Distance operator+(Distance &d)
    {
        Distance temp;

        temp.cm = cm + d.cm;
        temp.m = m + d.m + temp.cm / 100;
        temp.cm %= 100;

        temp.km = km + d.km + temp.m / 1000;
        temp.m %= 1000;

        return temp;
    }

    // Post-decrement
    Distance operator--(int)
    {
        Distance temp = *this;

        cm--;

        if (cm < 0)
        {
            cm = 99;
            m--;
        }

        if (m < 0)
        {
            m = 999;
            km--;
        }

        return temp;
    }

    // Pre-decrement
    Distance operator--()
    {
        --cm;

        if (cm < 0)
        {
            cm = 99;
            --m;
        }

        if (m < 0)
        {
            m = 999;
            --km;
        }

        return *this;
    }

    void display()
    {
        cout << km << " km " << m << " m " << cm << " cm" << endl;
    }
};

int main()
{
    Distance d1(5, 250, 50);
    Distance d2(2, 800, 75);

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    // Addition
    Distance d3 = d1 + d2;

    cout << "\nAddition: ";
    d3.display();

    // Pre-decrement
    cout << "\nPre-decrement:" << endl;
    Distance d4 = --d1;

    cout << "Returned value: ";
    d4.display();

    cout << "d1 after pre-decrement: ";
    d1.display();

    // Post-decrement
    cout << "\nPost-decrement:" << endl;
    Distance d5 = d1--;

    cout << "Returned value: ";
    d5.display();

    cout << "d1 after post-decrement: ";
    d1.display();

    return 0;
}