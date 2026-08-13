//19-swap arrays
#include <iostream>
using namespace std;

void swapArrays(int arr1[], int arr2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
int main()
{
    int arr1[100], arr2[100], n;
    cout << "Enter the number of elements in the arrays: ";
    cin >> n;
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    swapArrays(arr1, arr2, n);
    cout << "After swapping, the first array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "After swapping, the second array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}   