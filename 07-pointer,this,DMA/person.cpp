//1-class person(implementing 'this')
#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
};

int main()
{
    Person p1("Ayush", 19);

    return 0;
}