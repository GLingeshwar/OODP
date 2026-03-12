#include <iostream>
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
        void display()
        {
            cout<<a;
        }
    };
class Derived:private Base
{
    private:
    int d;
    public:
    void initD()
    {
        b=20;
        c=30;
        d=40;
    }
    void displayD()
    {
        cout<<b<<" "<<c<<" "<<d;
    }   
};
int main()
{
    Derived obj;
    obj.initD();
    obj.displayD();
    return 0;
}