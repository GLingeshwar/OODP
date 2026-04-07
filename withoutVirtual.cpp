#include<iostream>
using namespace std;
class Base
{
    public: 

    void display()
    {
        cout<<"Base class show function called"<<endl;
    }
};
class Derived1 : public Base
{
    public:
    void display()
    {
        cout<<"Derived1 class show function called"<<endl;
    }

};
class Derived2 : public Base
{
    public:
    void display()
    {
        cout<<"Derived2 class show function called"<<endl;
    }
};
int main()
{
    Base *ptr;
    Derived1 d1;
    Derived2 d2;
    ptr=&d1;
    ptr->display();
    ptr=&d2;
    ptr->display();
    return 0;
}