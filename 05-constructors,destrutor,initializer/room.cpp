// 9-class Room for hotel management
#include <iostream>
#include <string>
using namespace std;

class Room
{
private:
    int room_no;
    bool is_AC;
    string type;
    float price;

public:
    Room(int rno, int rt, bool ac, float p)
    {
        room_no = rno;

        string rtype[] = {"single", "double"};
        type = rtype[rt - 1];

        is_AC = ac;
        price = p;
    }

    void display()
    {
        cout << "Room Number: " << room_no << endl;
        cout << "Room Type: " << type << endl;
        cout << "AC: " << (is_AC ? "Yes" : "No") << endl;
        cout << "Price: " << price << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    Room r1(101, 1, true, 2500.0);
    Room r2(102, 2, true, 4000.0);
    Room r3(103, 1, false, 1800.0);
    Room r4(104, 2, false, 3000.0);

    r1.display();
    r2.display();
    r3.display();
    r4.display();

    return 0;
}