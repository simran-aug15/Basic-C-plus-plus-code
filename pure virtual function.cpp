//Using  pure Virtual Function 
#include<iostream>
using namespace std;
class A
{public:
 virtual void show()=0;
 
};
class B:public A{
    public:
    void show(){
   cout<<"class B"<<endl;}
};
int main()
{
    A*bptr;
    B aa;
    bptr=&aa;
    bptr->show();
}