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

    // insertion and extraction operator overloading
    friend ostream &operator<<(ostream &, Time);
    friend istream &operator>>(istream &, Time &);

    Time &operator=(Time &t)
    {
        hr = t.hr;
        min = t.min;
        sec = t.sec;

        return *this;
    }

    void showTime()
    {
        cout << "Time: " << hr << ":" << min << ":" << sec << endl;
    }
};

ostream &operator<<(ostream &dout, Time c)
{
    dout << "Time: " << c.hr << "hr:" << c.min << "m:" << c.sec<<"s" << endl;

    return dout;
}

istream &operator>>(istream &din, Time &c)
{
    din >> c.hr >> c.min >> c.sec;
    return din;
}
int main()
{
    Time t1(10, 59, 59);
    Time t2(9, 45, 50);

    // Display initial times
    cout << "Initial times:" << endl;

    cout << "Time 1: ";
    t1.showTime();

    cout << "Time 2: ";
    t2.showTime();

    // Testing + operator
    Time t3 = t1 + t2;

    cout << "\nAddition:" << endl;
    cout << "Time 1 + Time 2 = ";
    t3.showTime();

    // Testing > operator
    cout << "\nComparison:" << endl;

    if (t1 > t2)
        cout << "Time 1 is greater than Time 2" << endl;
    else
        cout << "Time 1 is not greater than Time 2" << endl;

    // Testing pre-increment
    cout << "\nPre-increment:" << endl;

    Time t4 = ++t1;

    cout << "Returned value: ";
    t4.showTime();

    cout << "Time 1 after pre-increment: ";
    t1.showTime();

    // Testing post-increment
    cout << "\nPost-increment:" << endl;

    Time t5 = t1++;

    cout << "Returned value: ";
    t5.showTime();

    cout << "Time 1 after post-increment: ";
    t1.showTime();

    // Testing assignment operator
    cout << "\nAssignment operator:" << endl;

    Time t6(0, 0, 0);

    t6 = t1;

    cout << "Time 1: ";
    t1.showTime();

    cout << "Time 6 after t6 = t1: ";
    t6.showTime();

    // Testing insertion operator <<
    cout << "\nInsertion operator (<<):" << endl;

    cout << "Time 1: " << t1;

    // Testing extraction operator >>
    cout << "\nExtraction operator (>>):" << endl;

    Time t7(0, 0, 0);

    cout << "Enter time (hr min sec): ";
    cin >> t7;

    cout << "Entered time: " << t7;

    return 0;
}