#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    Time(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }

    Time operator+(Time &t)
    {
        Time temp(0, 0, 0);

        temp.sec = sec + t.sec;
        temp.min = min + t.min + temp.sec / 60;
        temp.sec %= 60;

        temp.hr = hr + t.hr + temp.min / 60;
        temp.min %= 60;

        return temp;
    }

    bool operator>(Time &t)
    {
        if (hr > t.hr)
            return true;
        else if (hr < t.hr)
            return false;
        else if (min > t.min)
            return true;
        else if (min < t.min)
            return false;
        else if (sec > t.sec)
            return true;
        else
            return false;
    }
    // pre-increment
    Time operator++()
    {
        sec++;
        min += sec / 60;
        sec %= 60;
        hr += min / 60;
        min = min % 60;
        return *this;
    }
    Time operator++(int)
    {
        Time temp = *this;
        sec++;
        min += sec / 60;
        sec %= 60;
        hr += min / 60;
        min = min % 60;
        return temp;
    }

    void showTime()
    {
        cout << "Time: " << hr << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    Time t1(10, 59, 59);
    Time t2(9, 45, 50);

    cout << "Initial times:" << endl;
    cout << "First: ";
    t1.showTime();

    cout << "Second: ";
    t2.showTime();

    // Testing > operator
    if (t1 > t2)
        cout << "First is greater than second" << endl;
    else
        cout << "First is not greater than second" << endl;

    // Testing pre-increment
    cout << "\nPre-increment:" << endl;
    Time t3 = ++t1;

    cout << "Returned value: ";
    t3.showTime();

    cout << "First after pre-increment: ";
    t1.showTime();

    // Testing post-increment
    cout << "\nPost-increment:" << endl;
    Time t4 = t1++;

    cout << "Returned value: ";
    t4.showTime();

    cout << "First after post-increment: ";
    t1.showTime();

    return 0;
}