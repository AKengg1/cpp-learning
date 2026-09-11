#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string name;
    int age;

protected:
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void getName()
    {
        cout << "Name: " << name << endl;
    }
    void getAge()
    {
        cout << "Age: " << age << endl;
    }
};
class Employee : public Person
{
private:
    int salary;

public:
    void setEmployee(string n, int a, int s)
    {
        setName(n);
        setAge(a);
        salary = s;
    }
    void getEmployee()
    {
        getName();
        getAge();
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Employee e;
    e.setEmployee("John", 30, 50000);
    e.getEmployee();
    return 0;
}