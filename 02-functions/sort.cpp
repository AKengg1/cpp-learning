// 13-sorting array in ascending or descending order based on boolean value
#include <iostream>
using namespace std;
void sortArray(int[], int, bool);
void swap(int &, int &);
int main()
{
    int arr[100], n;
    bool order;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter 1 for ascending order or 0 for descending order: ";
    cin >> order;
    sortArray(arr, n, order);
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sortArray(int arr[], int n, bool order)
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
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}