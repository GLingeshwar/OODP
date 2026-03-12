#include<iostream>
using namespace std;
class Base
{
    private:
        int a;
    public:
        int b;
    protected:
        int c;
    public:
        void init()
        {
            a=10;
        }
};
class Derived: protected Base
{
    private:
        int d;
    public: 
        void initD()
        {
            init();
            b=20;
            c=30;
            d=40;
        }
        void display()
        {
            cout<<b<<c<<d;
        }
        int main()
        {
            Derived obj;
            obj.init();
            obj.initD();
            obj.display();
        }
};