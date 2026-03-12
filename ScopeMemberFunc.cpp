#include <iostream>
using namespace std;
class Student {
private:
    int rollno;
    string name;
public:
    void getdata();
void display();
};
void Student::getdata() {
    cout << "Enter roll number: ";
    cin >> rollno;
    cout << "Enter name: ";
    cin >> name;
}
void Student::display() {
    cout << "Roll Number: " << rollno << endl;
    cout << "Name: " << name << endl;
}
int main () {
    Student s1;
    s1.getdata();
    s1.display();
    return 0;
}