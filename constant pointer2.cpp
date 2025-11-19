//using constant pointer
#include<iostream>
using namespace std;
int main()
{
  int high=100;
  int low=66;
  int*const score(&high);
  cout<<*score<<endl;
  cout<<score<<endl;
  *score=60;
  cout<<*score<<endl;
  cout<<score<<endl;
  return 0;
}