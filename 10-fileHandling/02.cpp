#include <iostream>
#include <fstream>
using namespace std;
void readFile(char *filename)
{
    ifstream fin;
    char x;

    fin.open(filename);

    if (!fin)
    {
        cout << "Error in opening file!!!" << endl;
        return;
    }

    cout << "File opened successfully." << endl;

    while (fin.get(x))
    {
        cout << x;
    }

    fin.close();
}
int main()
{
    char filename[20];

    cout << "Enter the name of the file to read: ";
    cin >> filename;

    readFile(filename);

    return 0;
}