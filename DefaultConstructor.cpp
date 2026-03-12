#include <iostream>
using namespace std;    
class Student {
private:
    string name;
    int rollno;
public:
    Student() {
    name = "tom";
    rollno = 68;
    }   
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }   
};
int main() {
    Student s1;
    s1.display();
    return 0;
}