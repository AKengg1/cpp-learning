// 2-class of time
#include <iostream>
using namespace std;
class Time
{
private:
    int hours, minutes, seconds;

public:
    void setTime()
    {
        cout << "Enter hours";
        cin >> hours;
        cout << "Enter minutes";
        cin >> minutes;
        cout << "Enter seconds";
        cin >> seconds;
    }
    void display()
    {
        cout << "Time is: " << hours << " hr" << minutes << " min" << seconds << " sec";
    }
};

int main()
{
    Time t1;
    t1.setTime();
    t1.display();
    return 0;
}