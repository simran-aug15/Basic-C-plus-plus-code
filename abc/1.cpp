#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int num[]={4,9,-4,7,10};
    int size=5;
    int i=0;
    int smallest=INT_MAX;
    for(i=0;i<size;i++)
    {
      if(num[i]<smallest)
      {
        smallest=i;
      }
    }
    cout<<i;
}