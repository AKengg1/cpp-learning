int main()
{
    Employee e;
    int choice;
    int searchId;
    do
    {
        cout << "\n1. Add Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Search Employee" << endl;
        cout << "4. Edit Employee" << endl;
        cout << "5. Delete Employee" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "---------------------------------" << endl;
        switch (choice)
        {
        case 1:
            e.inputData();
            e.writeToFile();
            break;
        case 2:
            e.readFromFile();
            break;
        case 3:
            cout << "Enter Employee ID to search: ";
            cin >> searchId;
            e.findEmployee(searchId);
            break;
        case 4:
            cout << "Enter Employee ID to edit: ";
            cin >> searchId;
            e.editEmployee(searchId);
            break;
        case 5:
            cout << "Enter Employee ID to delete: ";
            cin >> searchId;
            e.deleteEmployee(searchId);
            break;
        case 6:
            cout << "Program ended." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
        cout << "---------------------------------" << endl;
    } while (choice != 6);

    cout << "Exiting the program." << endl;
    return 0;
}