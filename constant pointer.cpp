//program using constant pointer
#include<iostream>
using namespace std;
int main()
{
  int high=100;
  int low=66;
  const int*score(&high);
  cout<<*score<<endl;
  score=&low;
  cout<<*score<<endl;
  return 0;
}