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