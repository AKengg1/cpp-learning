// 4-constructor for Book
#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    int bookid;
    string title;
    double price;

public:
    Book()
    {
        bookid = 1;
        title = "";
        price = 0;
    }
    Book(int id, string name, double cost)
    {
        bookid = id;
        title = name;
        price = cost;
    }
};
int main()
{
    Book b1; // non-parameterized constructor

    Book b2(101, "C++ Programming", 599.50); // parameterized constructor

    return 0;
}