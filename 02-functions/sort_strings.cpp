// 14-sort array of strings in ascending or descending order based on boolean value
#include <iostream>
using namespace std;
void sortStrings(string[], int, bool);
void swap(string &, string &);
int main()
{
    string arr[100];
    int n;
    bool order;
    cout << "Enter the number of strings: ";
    cin >> n;
    cout << "Enter the strings: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter 1 for ascending order or 0 for descending order: ";
    cin >> order;
    sortStrings(arr, n, order);
}
void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}
void sortStrings(string arr[], int n, bool order)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (order && arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            else if (!order && arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Sorted strings: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}