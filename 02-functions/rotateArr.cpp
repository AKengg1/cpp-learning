// 15-rotating arrays
#include <iostream>
using namespace std;
void rotateArray(int[], int, int, int = 1);
int main()
{
    int arr[100], n, d, p;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate the array: ";
    cin >> p;
    cout << "Enter -1 for left rotation or 1 for right rotation: ";
    cin >> d;
    rotateArray(arr, n, d, p);
}
void rotateArray(int arr[], int n, int d, int p)
{
    if (d == 1)
    {
        for (int i = 0; i < p; i++)
        {
            int temp = arr[n - 1];
            for (int j = n - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[0] = temp;
        }
    }
    else if (d == -1)
    {
        for (int i = 0; i < p; i++)
        {
            int temp = arr[0];
            for (int j = 0; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[n - 1] = temp;
        }
    }
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
