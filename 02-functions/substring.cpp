// 18-getting substring of a string
#include <iostream>
#include <string>
using namespace std;
void getSubstring(string, int, int = -1);
int main()
{
    string str;
    int start, end;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the starting index and ending index of the substring: ";
    cin >> start >> end;
    getSubstring(str, start, end);
    return 0;
}

void getSubstring(string str, int start, int end)
{
    if (end == -1)
        end = str.length();
    else
    {
        for (int i = start; i < end && i < str.length(); i++)
        {
          
                cout << str[i];
    
        }
    }
}
