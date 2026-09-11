#include <iostream>
#include <fstream>
using namespace std;

void readFile_writeFile(char *filename, char *filename2)
{
    ifstream fin;
    ofstream fout;
    char x;

    fin.open(filename);

    if (!fin)
    {
        cout << "Error in opening file!!!" << endl;
        return;
    }

    cout << "File opened successfully." << endl;

    fout.open(filename2, ios::out);

    while (fin.get(x))
    {
        fout << x;
    }

    cout << "File copied successfully." << endl;

    fin.close();
    fout.close();
}

int main()
{
    char filename[20], filename2[20];

    cout << "Enter the name of the file to read: ";
    cin >> filename;

    cout << "Enter the name of the file to write: ";
    cin >> filename2;

    readFile_writeFile(filename, filename2);

    return 0;
}