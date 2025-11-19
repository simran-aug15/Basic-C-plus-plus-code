// unary operator overloading using friend function
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
 friend void operator++(Display &obj1);

 friend void  operator--(Display &obj1);
 void out()
{
    cout<<hr <<"hr"  ;
    cout<<min <<"min ";

}
};
void operator ++(Display &obj1){
    obj1.hr++;
    obj1.min++;
}
void operator --(Display &obj1){
    obj1.hr--;
    obj1.min--;
}
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
