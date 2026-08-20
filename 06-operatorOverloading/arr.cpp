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

    Array& operator=(Array &a)
    {
        for (int i = 0; i < size; i++)
        {
            p[i] = a.p[i];
            return *this;
        }
    }

    Array operator+(Array &a)
    {
        int l = size + a.size;
        int j = 0;
        Array b(l);
        for (int i = 0; i < l; i++)
        {
            if (i < size)
            {
                b[i] = p[i];
            }
            else
            {
                b[i] = a.p[j];
                j++;
            }
        }
    }

    ~Array()
    {
        delete[] p;
    }
};

int main()
{
    Array a1(5);
    Array a2(3);

    // Input first array
    cout << "Enter 5 elements for first array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> a1[i];
    }

    // Input second array
    cout << "Enter 3 elements for second array: ";

    for (int i = 0; i < 3; i++)
    {
        cin >> a2[i];
    }

    // Display first array
    cout << "\nFirst array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << a1[i] << " ";
    }

    // Display second array
    cout << "\nSecond array: ";

    for (int i = 0; i < 3; i++)
    {
        cout << a2[i] << " ";
    }

    // Test + operator
    Array a3 = a1 + a2;

    cout << "\n\nAfter a1 + a2: ";

    for (int i = 0; i < 8; i++)
    {
        cout << a3[i] << " ";
    }

    // Test = operator
    Array a4(5);

    a4 = a1;

    cout << "\n\nAfter a4 = a1: ";

    for (int i = 0; i < 5; i++)
    {
        cout << a4[i] << " ";
    }

    cout << endl;

    return 0;
}