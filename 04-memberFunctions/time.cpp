// 2-class of time
#include <iostream>
using namespace std;
class Time
{
private:
    int h, m, s;

public:
    void setTime(int h, int m, int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
    }
    void showTime()
    {
        cout << "Time is: " << h << " hr "
             << m << " min "
             << s << " sec";
    }
    void normalize()
    {
        m += s / 60;
        s %= 60;
        h += m / 60;
        m %= 60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.s = s + t.s;
        temp.normalize();
        return temp;
    }
    bool is_greater(Time t);
};

bool Time::is_greater(Time t)
{
    t.normalize();
    if (h > t.h)
        return true;
    else if (h < t.h)
        return false;
    else if (m > t.m)
        return true;
    else if (m < t.m)
        return false;
    else if (s > t.s)
        return true;
    else
        return false;
}

int main()
{
    Time t1, t2, t3;

    t1.setTime(2, 45, 50);
    t2.setTime(3, 20, 30);

    cout << "T1: ";
    t1.showTime();

    cout << "T2: ";
    t2.showTime();

    t1.setTime(2, 70, 80);

    cout << "\nBefore normalization: ";
    t1.showTime();

    t1.normalize();

    cout << "After normalization: ";
    t1.showTime();

    t1.setTime(2, 45, 50);
    t2.setTime(3, 20, 30);

    t3 = t1.add(t2);

    cout << "\nT1 + T2: ";
    t3.showTime();

    cout << "\nComparison:" << endl;

    if (t1.is_greater(t2))
        cout << "T1 is greater than T2" << endl;
    else
        cout << "T1 is not greater than T2" << endl;

    return 0;
}