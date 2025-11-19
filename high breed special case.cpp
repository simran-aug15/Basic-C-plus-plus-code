//program using special case of high breed inheritance)(virtual)
#include<iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle()
    {

        cout<<"This is a vehicle"<<endl;
    }
    
};
    class Car: public virtual Vehicle
    {
        
    };
    class Truck: virtual public Vehicle
    {

    };
    class Bicycle:public Car,public Truck{

    };
    int main()
   {
       Car c1;
       Truck t1;
       Bicycle B1;
       return 0;
   }


   


