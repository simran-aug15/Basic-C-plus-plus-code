//binary operator overloading using class function
#include<iostream>
using namespace std;
class Display
{ 
 int real;
 int img;
  public:
  Display()
  {
    real=0;
    img=0;
  }
 Display(int r,int i)
 {
    real=r;
    img=i;
 }
 void in()
 {
    cout<<real<<"+"<<img<<"i"<<endl;
 }
//operator overloading
Display operator+(Display d)
{
    Display temp;
    temp.real=real+d.real;
    temp.img=img+d.img;
    return temp;
}
};
int main(){
    Display d1(3, 4);
    Display d2(7, 9);
    Display d3;
    d3=d1+d2;
    d3.in();
    return 0;
    
}











