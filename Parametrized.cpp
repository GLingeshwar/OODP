#include <iostream>
using namespace std;
class student {
private:
int rollno;
string name;
public:
student(int n, string nam) {
rollno = n;
name = nam;
}   
void display() {
cout << "Roll No: " << rollno << endl;      
cout << "Name: " << name << endl;
}
};      
int main() {
student s1(13, "dharshan");
s1.display();
student s2(68, "linga");
s2.display();
student s3(55, "adarsh");
s3.display();

return 0;
}   