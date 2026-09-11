#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Employee
{
private:
    int empId;
    string name;
    double salary;

public:
    void inputData()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }
    void displayData()
    {
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
    void writeToFile()
    {
        ofstream out("employees.txt", ios::app);
        out << empId << " " << name << " " << salary << endl;
        out.close();
    }
    void readFromFile()
    {
        ifstream in("employees.txt");
        if (!in)
        {
            cout << "Error opening file!" << endl;
            return;
        }
        cout << "Employee Records:" << endl;
        while (in >> empId >> name >> salary)
        {
            displayData();
        }
        in.close();
    }
    void findEmployee(int searchId)
    {
        ifstream in("employees.txt");
        if (!in)
        {
            cout << "Error opening file!" << endl;
            return;
        }
        Employee emp;
        bool found = false;
        while (in >> emp.empId >> emp.name >> emp.salary)
        {
            if (emp.empId == searchId)
            {
                cout << "Employee Found:" << endl;
                emp.displayData();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Employee with ID " << searchId << " not found." << endl;
        }
        in.close();
    }
    void editEmployee(int searchId)
    {
        ifstream in("employees.txt");
        ofstream temp("temp.txt");
        if (!in || !temp)
        {
            cout << "Error opening file!" << endl;
            return;
        }
        Employee emp;
        bool found = false;
        while (in >> emp.empId >> emp.name >> emp.salary)
        {
            if (emp.empId == searchId)
            {
                cout << "Editing Employee with ID " << searchId << endl;
                emp.inputData();
                found = true;
            }
            temp << emp.empId << " " << emp.name << " " << emp.salary << endl;
        }
        in.close();
        temp.close();
        remove("employees.txt");
        rename("temp.txt", "employees.txt");
        if (!found)
        {
            cout << "Employee with ID " << searchId << " not found." << endl;
        }
    }
    void deleteEmployee(int searchId)
    {
        ifstream in("employees.txt");
        ofstream temp("temp.txt");
        if (!in)

        {

            cout << "Error opening file!" << endl;
            return;
        }
        Employee emp;
        bool found = false;
        while (in >> emp.empId >> emp.name >> emp.salary)
        {
            if (emp.empId == searchId)
            {
                cout << "Deleting Employee with ID " << searchId << endl;
                found = true;
                continue; // Skip writing this employee to temp file
            }
            temp << emp.empId << " " << emp.name << " " << emp.salary << endl;
        }
        if (!found)
        {
            cout << "Employee with ID " << searchId << " not found." << endl;
        }

        else
        {
            in.close();
            temp.close();
            remove("employees.txt");
            rename("temp.txt", "employees.txt");
            cout << "Employee with ID " << searchId << " deleted successfully." << endl;
        }
    }
};

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
            cout << "---------------------------------" << endl;
            break;
        case 2:
            e.readFromFile();
            cout << "---------------------------------" << endl;
            break;
        case 3:
            cout << "Enter Employee ID to search: ";
            cin >> searchId;
            e.findEmployee(searchId);
            cout << "---------------------------------" << endl;
            break;
        case 4:
            cout << "Enter Employee ID to edit: ";
            cin >> searchId;
            e.editEmployee(searchId);
            cout << "---------------------------------" << endl;
            break;
        case 5:
            cout << "Enter Employee ID to delete: ";
            cin >> searchId;
            e.deleteEmployee(searchId);
            cout << "---------------------------------" << endl;
            break;
        case 6:
            cout << "Program ended." << endl;
            cout << "---------------------------------" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 6);

    cout << "Exiting the program." << endl;
    return 0;
}