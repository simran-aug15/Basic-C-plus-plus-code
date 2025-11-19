//function overloading using different number of parameters
#include<iostream>
using namespace std;

class Display{
    public:
 int add(int a,int b)
{
    return a+b;
}    
 int add(int a,int b,int c)
{
    return a+b+c;
}

};
int main()
{
  Display d1;
  cout<<d1.add(3,7,6)<<endl;
  cout<<d1.add(5,7);
  return 0;
}