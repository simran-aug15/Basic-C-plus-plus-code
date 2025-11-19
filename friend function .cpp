// write a program using friend function
#include<iostream>
using namespace std;
class Distance{
  
  private:
    int meters;
 public:
 Distance(){
    meters=0;
 }
 void displaydata(){
    cout<<"meter value  "<<meters<<endl;

 }
 friend void addvalue(Distance &d);
};
 void addvalue(Distance &d)
 {
    d.meters=d.meters+5;
 }
 int main()
 {
  Distance d1;
  d1.displaydata();
  addvalue(d1);
  d1.displaydata();
  return 0;




 }
