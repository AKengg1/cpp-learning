// 3-date class
#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    void setDate()
    {
        cout << "Enter day";
        cin >> day;
        cout << "Enter month";
        cin >> month;
        cout << "Enter year";
        cin >> year;
    }
    void display()
    {
        cout << day << "-" << month << "-" << year<<endl;
    }
    void showMonth()
    {
        string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        cout << day << "-" << months[month - 1] << "-" << year<<endl;
    }
};
int main()
{
    Date d;
    d.setDate();
    d.display();
    d.showMonth();
    return 0;
}