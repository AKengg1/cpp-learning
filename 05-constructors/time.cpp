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

    void showTime()
    {
        cout << "Time: " << hr << ":" << min << ":" << sec;
    }
};

int main()
{
    Time t(10, 30, 45);

    t.showTime();

    return 0;
}