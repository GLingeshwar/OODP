#include <iostream>
using namespace std;

class Employee {
protected:
    int empID;
    string empName;

public:
    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> empName;
    }

    void displayEmployeeDetails() {
        cout << "\nEmployee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
    }
};

class Manager : public Employee {
private:
    string department;
    float salary;

public:
    void getManagerDetails() {
        getEmployeeDetails();
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayManagerDetails() {
        displayEmployeeDetails();
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Manager m;

    m.getManagerDetails();
    cout << "\n--- Manager Details ---" << endl;
    m.displayManagerDetails();

    return 0;
}