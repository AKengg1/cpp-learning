#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;
    int sec;

public:

    // Q1: setTime()
    void setTime(int hr, int min, int sec)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }

    // Q1: showTime()
    void showTime()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }

    // Q1: Setters
    void setHr(int hr)
    {
        this->hr = hr;
    }

    void setMin(int min)
    {
        this->min = min;
    }

    void setSec(int sec)
    {
        this->sec = sec;
    }

    // Q1: Getters
    int getHr()
    {
        return hr;
    }

    int getMin()
    {
        return min;
    }

    int getSec()
    {
        return sec;
    }


    // Q2: Dynamically create Time object array
    static Time* createArray(int size)
    {
        Time* arr = new Time[size];

        return arr;
    }


    // Q3: Sort Time object array
    static void sortTime(Time arr[], int size)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                bool greater = false;

                // Compare hours
                if (arr[j].getHr() > arr[j + 1].getHr())
                {
                    greater = true;
                }

                // If hours are same, compare minutes
                else if (arr[j].getHr() == arr[j + 1].getHr() &&
                         arr[j].getMin() > arr[j + 1].getMin())
                {
                    greater = true;
                }

                // If hours and minutes are same, compare seconds
                else if (arr[j].getHr() == arr[j + 1].getHr() &&
                         arr[j].getMin() == arr[j + 1].getMin() &&
                         arr[j].getSec() > arr[j + 1].getSec())
                {
                    greater = true;
                }

                // Swap
                if (greater)
                {
                    Time temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }


    // Q4: Display Time object array
    static void displayArray(Time arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i].showTime();
        }
    }
};


int main()
{
    int n;

    cout << "Enter number of Time objects: ";
    cin >> n;

    Time* arr = Time::createArray(n);


    for (int i = 0; i < n; i++)
    {
        int h, m, s;

        cout << "Enter Time " << i + 1
             << " (hr min sec): ";

        cin >> h >> m >> s;

        arr[i].setTime(h, m, s);
    }


    cout << "\nOriginal Time Array:" << endl;

    Time::displayArray(arr, n);


    Time::sortTime(arr, n);


    cout << "\nSorted Time Array:" << endl;

    Time::displayArray(arr, n);


    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}
