// 6-defining number class and using DMA and copy constructor
#include <iostream>
using namespace std;
class Numbers
{
private:
    int size, *arr;

public:
    Numbers(int s)
    {
        size = s;
        arr = new int[size];
    }
    Numbers(Numbers &n)
    {
        size = n.size;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = n.arr[i];
        }
    }
    ~Numbers() { delete[] arr; }
    void input()
    {
        cout << "Enter " << size << " numbers: ";

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Numbers n1(5);

    n1.input();

    Numbers n2(n1); // copy constructor

    cout << "Original object: ";
    n1.display();

    cout << "Copied object: ";
    n2.display();
}