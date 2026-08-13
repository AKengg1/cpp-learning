// 20-merge two sorted arrays
#include <iostream>
using namespace std;
void sortArray(int[], int);
void mergeArrays(int[], int, int[], int, int[]);
int main()
{
    int arr1[100], arr2[100], mergedArr[200], n1, n2;
    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    mergeArrays(arr1, n1, arr2, n2, mergedArr);
    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << mergedArr[i] << " ";
    }
}
void sortArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[])
{
    int x = 0, y = 0, z = 0;

    while (x < n1 && y < n2)
    {
        if (arr1[x] < arr2[y])
        {
            mergedArr[z] = arr1[x];
            x++;
        }
        else
        {
            mergedArr[z] = arr2[y];
            y++;
        }
        z++;
    }

    while (x < n1)
    {
        mergedArr[z] = arr1[x];
        x++;
        z++;
    }

    while (y < n2)
    {
        mergedArr[z] = arr2[y];
        y++;
        z++;
    }
}
