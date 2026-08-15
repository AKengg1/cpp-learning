//2-parameterised and non parameterised constructor
#include <iostream>
#include <string>
using namespace std;
class Customer
{
private:
    int cust_id;
    string name;
    string email;
    long mobile;

public:
    Customer()
    {
        cust_id = 1;
        name = "";
        email = "";
        mobile = 0;
    }
    Customer(int c, string s, string e, long m)
    {
        cust_id = c;
        name = s;
        email = e;
        mobile = m;
    }
};

int main()
{
    Customer c1;

    Customer c2(101, "Ayush", "ayush@gmail.com", 6969696969);//just a boy yk :)

    return 0;
}