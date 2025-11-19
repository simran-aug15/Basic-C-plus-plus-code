//program using multiple inheritance
#include<iostream>
using namespace std;
class Vehicle
{
    public:
    double fuelamount;
    double capacity;
    
};
    

 class Truck{
 public: 
     Truck(){
        cout<<"apply break"<<endl;
     }

 };
 class Car:public Truck,public Vehicle{

 };
 int main()
{
    Car C1;
    C1.fuelamount=10000;
    C1.capacity=10000;
    cout<<"fuelamount is"<<C1.fuelamount<<endl;
    cout<<"capacity"<<C1.capacity;

    return 0;
}