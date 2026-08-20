#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    int age;

public:
    void setStudent()
    {
        cout << "Enter roll number: ";
        cin >> roll_no;

        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
    }

    void showStudent()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    bool operator==(Student &s)
    {
        return roll_no == s.roll_no &&
               name == s.name &&
               age == s.age;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter details of first student:\n";
    s1.setStudent();

    cout << "\nEnter details of second student:\n";
    s2.setStudent();

    cout << "\nFirst student:\n";
    s1.showStudent();

    cout << "\nSecond student:\n";
    s2.showStudent();

    if (s1 == s2)
        cout << "\nBoth students are equal." << endl;
    else
        cout << "\nStudents are not equal." << endl;

    return 0;
}