#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

class String
{
private:
    char *p;
    int length;

public:
    // Method to input string dynamically
    void input()
    {
        char str[100];

        cout << "Enter a string: ";
        cin.getline(str, 100);

        length = strlen(str);

        p = new char[length + 1];

        strcpy(p, str);
    }

    void upper()
    {
        for (int i = 0; i < length; i++)
        {
            p[i] = toupper(p[i]);
        }
    }

    void lower()
    {
        for (int i = 0; i < length; i++)
        {
            p[i] = tolower(p[i]);
        }
    }

    void print()
    {
        cout << p << endl;
    }

    // Return string
    char* getString()
    {
        return p;
    }

    // Return length
    int getLength()
    {
        return length;
    }

    // Destructor
    ~String()
    {
        delete[] p;
    }
};

int main()
{
    String s;

    s.input();

    cout << "\nOriginal string: ";
    s.print();

    cout << "Length: " << s.getLength() << endl;

    s.upper();
    cout << "Uppercase: ";
    s.print();

    s.lower();
    cout << "Lowercase: ";
    s.print();

    cout << "Returned string: " << s.getString() << endl;

    return 0;
}