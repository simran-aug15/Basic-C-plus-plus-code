// hierarchial inheritance
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
 class Car:public Vehicle{

 };
 int main()
{
    Car C1;
    C1.fuelamount=10000;
    C1.capacity=10000;
    cout<<"fuel amount is "<<C1.fuelamount<<endl;
    cout<<"capacity"<<C1.capacity;

    return 0;
}