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

    void showTime()
    {
        cout << "Time: " << hr << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    Time t1(10, 30, 45);
    Time t2(9, 45, 50);

    t1.showTime();
    t2.showTime();

    if (t1 > t2)
        cout << "t1 is greater than t2" << endl;
    else
        cout << "t1 is not greater than t2" << endl;

    return 0;
}