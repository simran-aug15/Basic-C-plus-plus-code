// WAP of printingreverse of 123
#include<iostream>
using namespace std;
int main()
{ int last;
 int num=123;
 int r=0;
 while(num>0)
 {
     last=num%10;
     r=r*10+last;
    num=num/10;
 }
 cout<<r;
}