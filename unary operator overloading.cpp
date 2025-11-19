//operator Unary overloading using class member function
#include<iostream>
using namespace std;
class Display 
{
int hr;
int min;
public:
void in()
{
    cout<<"enter the data"<<endl;
    cout<<"hr : ";
    cin>>hr;
    cout<<"min : ";
    cin>>min;
}
void operator++(){
    hr++;
    min++;
}
void  operator--(){
    hr--;
    min--;
}
 void out()
{
    cout<<hr <<"hr  ";
    cout<<min <<"min  ";

}
};
int main()
{
    Display obj1;
    obj1.in();
    ++obj1;
    obj1.out();
    --obj1;
    obj1.out();
    return 0;

}
