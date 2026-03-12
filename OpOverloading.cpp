#include <iostream>
using namespace std;
class OperatorOverloading {
private:
    int num;
    public:
    OperatorOverloading(int n) {
        num = n;
    }
    void operator++() {
       num = num + 1;
    }
    void display() {
        cout << "the count is: " << num << endl;
    }

};int main() {
    OperatorOverloading ov(10);
    ov.display();
    ++ov;
    ov.display();
    return 0;
}