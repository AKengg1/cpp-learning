// 03-operators for matrix
#include <iostream>
using namespace std;

class Matrix
{
private:
    int A[3][3];

public:
    void input()
    {
        cout << "Enter 9 matrix elements:\n";

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> A[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Matrix addition
    Matrix operator+(Matrix &m)
    {
        Matrix temp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.A[i][j] = A[i][j] + m.A[i][j];
            }
        }

        return temp;
    }

    // Matrix subtraction
    Matrix operator-(Matrix &m)
    {
        Matrix temp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.A[i][j] = A[i][j] - m.A[i][j];
            }
        }

        return temp;
    }

    // Matrix multiplication
    Matrix operator*(Matrix &m)
    {
        Matrix temp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.A[i][j] = 0;

                for (int k = 0; k < 3; k++)
                {
                    temp.A[i][j] += A[i][k] * m.A[k][j];
                }
            }
        }

        return temp;
    }
};

int main()
{
    Matrix m1, m2, m3, m4, m5;

    cout << "Enter first matrix:\n";
    m1.input();

    cout << "\nEnter second matrix:\n";
    m2.input();

    // Addition
    m3 = m1 + m2;

    cout << "\nAddition:\n";
    m3.display();

    // Subtraction
    m4 = m1 - m2;

    cout << "\nSubtraction:\n";
    m4.display();

    // Multiplication
    m5 = m1 * m2;

    cout << "\nMultiplication:\n";
    m5.display();

    return 0;
}