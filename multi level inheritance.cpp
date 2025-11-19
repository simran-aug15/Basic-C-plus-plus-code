//program using multi level
#include<iostream>
using namespace std;
class Vehicle
{
    public:
    double fuelamount;
    double capacity;
    Vehicle(){
    cout<<" applybreak"<<endl;
}
    
};
 class Truck:public Vehicle{
 public:
 };
 class Car:public Truck{

 };
 int main()
{
    Car C1;
    C1.fuelamount=10000;
    cout<<"fuel amount is "<<C1.fuelamount;
    Truck t1;
    t1.capacity=2000;
    cout<<"capacity "<<t1.capacity;


    return 0;
}