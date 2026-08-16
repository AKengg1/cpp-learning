// 7-student class to enter and display details
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int roll;
    string name;

public:
    Student()
    {
        cout << "Enter Roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
    }
    void display()
    {
        cout << "Roll number: " << roll << " Name: " << name << endl;
    }
};
int main()
{
    Student s1;

    s1.display();

    return 0;
}