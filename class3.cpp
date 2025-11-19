//create a rectangle class with attribute length and width include methods to calculate the area and perimeter.
#include<iostream>
using namespace std ;
class Rectangle{
    public:
  double length;
  double width;
  double calculatearea()
  {
    return length*width;

  }
    double calculateperimeter()
    {
        return 2*(length*width);
    }

};
     int main()
{

   Rectangle R1;
   R1.length=5;
   R1.width=6;
   cout<<"area is  " <<R1.calculatearea()<<endl;
   cout<<"perimeter is  " <<R1.calculateperimeter()<<endl;
   return 0;







}