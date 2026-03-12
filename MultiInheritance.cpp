#include <iostream>
using namespace std;
class Movement{
    publicL
        void move(){
            cout<<"Vehicle id moving\n";
        }
};
class Fuel{
    public:
        void refillFuel(){
            cout<<"Refilling fuel\n";
        }
};
class Car : public Movement, public Fuel
{
    public:
        void honk(){
            cout<<"Car is honking";
        }
};
int main()
{
    Car myCar;
    myCar move();
    myCar.refillFuel();
    myCar.honk();
    return 0;
}