// 4-matrix and class
#include <iostream>
using namespace std;
class Matrix
{
private:
    int A[3][3];

public:
    void input()
    {
        cout << "Enter 9 matrix elements row wise";
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                cin >> A[i][j];
    }
    void display()
    {
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
                cout << A[i][j] << "  ";
            cout << endl;
        }
    }
    Matrix add(Matrix M)
    {
        Matrix temp;
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
                temp.A[i][j] = A[i][j] + M.A[i][j];
        }
        return temp;
    }
    Matrix sub(Matrix M)
    {
        Matrix temp;
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
                temp.A[i][j] = A[i][j] - M.A[i][j];
        }
        return temp;
    }
    Matrix multiply(Matrix M)
    {
        Matrix temp;
        int sum;
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                for (int k = 0, sum = 0; k <= 2; k++)
                    sum += A[i][k] * M.A[k][j];
                temp.A[i][j] = sum;
            }
        }
        return temp;
    }
    Matrix transpose()
    {
        Matrix temp;
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                temp.A[j][i] = A[i][j];
            }
        }
        return temp;
    }
    bool is_singular()
    {
        int s;
        s = A[0][0] * (A[1][1] * A[2][2] - A[2][1] * A[1][2]) - A[0][1] * (A[1][0] * A[2][2] - A[2][0] * A[1][2]) + A[0][2] * (A[1][0] * A[2][1] - A[2][0] * A[1][1]);
        if (s == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    Matrix A, B, C;

    cout << "Enter Matrix A:" << endl;
    A.input();

    cout << "\nEnter Matrix B:" << endl;
    B.input();

    cout << "\nMatrix A:" << endl;
    A.display();

    cout << "\nMatrix B:" << endl;
    B.display();

    // Addition
    C = A.add(B);
    cout << "\nA + B:" << endl;
    C.display();

    // Subtraction
    C = A.sub(B);
    cout << "\nA - B:" << endl;
    C.display();

    // Multiplication
    C = A.multiply(B);
    cout << "\nA * B:" << endl;
    C.display();

    // Transpose
    C = A.transpose();
    cout << "\nTranspose of A:" << endl;
    C.display();

    // Singularity
    if (A.is_singular())
        cout << "\nMatrix A is singular." << endl;
    else
        cout << "\nMatrix A is non-singular." << endl;

    if (B.is_singular())
        cout << "Matrix B is singular." << endl;
    else
        cout << "Matrix B is non-singular." << endl;

    return 0;
}