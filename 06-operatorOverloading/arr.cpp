// 6-class array
#include <iostream>
using namespace std;
class Array
{
    int *p;
    int size;

public:
    Array(int s)
    {
        size = s;
        p = new int[size];
    }

    int &operator[](int i)
    {
        return p[i];
    }

    ~Array()
    {
        delete[] p;
    }
};

int main()
{
    Array n(5);

    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    cout << "Array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cout << n[i] << " ";
    }

    cout << endl;

    return 0;
}