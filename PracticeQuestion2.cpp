#include <iostream>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;

public:
    void getStudent() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent() {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class Result : public Student {
private:
    int m1, m2, m3;
    int total;
    float average;

public:
    void getMarks() {
        getStudent();
        cout << "Enter Marks of Subject 1: ";
        cin >> m1;
        cout << "Enter Marks of Subject 2: ";
        cin >> m2;
        cout << "Enter Marks of Subject 3: ";
        cin >> m3;

        total = m1 + m2 + m3;
        average = total / 3.0;
    }

    void displayResult() {
        displayStudent();
        cout << "Marks 1: " << m1 << endl;
        cout << "Marks 2: " << m2 << endl;
        cout << "Marks 3: " << m3 << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    Result r;

    r.getMarks();
    cout << "\n--- Student Result ---" << endl;
    r.displayResult();

    return 0;
}