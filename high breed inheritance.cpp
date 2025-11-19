//program using high breed inheritance
#include<iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle()
    {
    cout<<" This is a vehicle"<<endl;
}
    
};
 class Truck{
 public:
   Truck(){
    cout<<"this is a truck"<<endl;
   }
 };
 class Car:public Truck,public Vehicle{

 };
 class Bicycle:public Vehicle{

 };
 int main()
{
    Car C1;
    Bicycle B1;
    

    return 0;
}