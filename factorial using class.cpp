// factorial of a number using class
#include<iostream>
using namespace std;
class factorial{
    public:
 int fact;
 int number;
 factorial()
 {
    cout<<"i am a constructor"<<endl;
 }

};
int main()
{ 
 factorial F1;
 F1.fact=1;
 F1.number=5;
 for(int i=1; F1.number>=i; F1.number--)
 {
    F1.fact=F1.fact*F1.number;
 }
   cout<<"the factorial is"<<F1.fact<<endl;
   return 0;
}





