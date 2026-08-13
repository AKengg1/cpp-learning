#include <iostream>
using namespace std;

class testResult
{
private:
    int roll, right, wrong, netScore;
    static int rightWeightage, wrongWeightage;

public:
    void setRoll_no(int r) { roll = r; }
    void setRight(int r) { right = r; }
    void setWrong(int w) { wrong = w; }
    void setNetScore(int n) { netScore = n; }

    static void setRight_weightage(int rw)
    {
        rightWeightage = rw;
    }

    static void setWrong_weightage(int ww)
    {
        wrongWeightage = ww;
    }

    int getRoll_no() { return roll; }
    int getRight() { return right; }
    int getWrong() { return wrong; }
    int getNetScore() { return netScore; }

    static int getRight_weightage()
    {
        return rightWeightage;
    }

    static int getWrong_weightage()
    {
        return wrongWeightage;
    }
};

int testResult::rightWeightage;
int testResult::wrongWeightage;

void setTestResult(testResult &t, int r, int right, int wrong)
{
    t.setRoll_no(r);
    t.setRight(right);
    t.setWrong(wrong);

    t.setNetScore(
        t.getRight() * testResult::getRight_weightage() - t.getWrong() * testResult::getWrong_weightage());
}

void sortByNetScore(testResult tr[], int size)
{
    int round, i;
    testResult temp;

    for (round = 1; round < size; round++)
    {
        for (i = 0; i <= size - 1 - round; i++)
        {
            if (tr[i].getNetScore() < tr[i + 1].getNetScore())
            {
                temp = tr[i];
                tr[i] = tr[i + 1];
                tr[i + 1] = temp;
            }
        }
    }
}

void showTestResults(testResult tr[], int size)
{
    cout << endl;
    cout << "--------------------------------------" << endl;
    cout << "Roll No  Right  Wrong  Net Score";

    for (int i = 0; i < size; i++)
    {
        cout << endl;
        cout << tr[i].getRoll_no() << "  ";
        cout << tr[i].getRight() << "  ";
        cout << tr[i].getWrong() << "  ";
        cout << tr[i].getNetScore() << "  ";
    }
}

int main()
{
    int size = 5;

    testResult arr[5];

    testResult::setRight_weightage(4);
    testResult::setWrong_weightage(1);

    setTestResult(arr[0], 101, 8, 2);
    setTestResult(arr[1], 102, 6, 1);
    setTestResult(arr[2], 103, 9, 3);
    setTestResult(arr[3], 104, 5, 0);
    setTestResult(arr[4], 105, 7, 2);

    cout << "Before sorting:";
    showTestResults(arr, size);

    sortByNetScore(arr, size);

    cout << "\n\nAfter sorting by Net Score:";
    showTestResults(arr, size);

    return 0;
}