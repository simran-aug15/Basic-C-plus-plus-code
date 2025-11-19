//largest number and index of that number im array 
#include<iostream>
#include <climits>
using namespace std;
int main(){
    int num[]={3,5,28,89,-6};
    int largest=INT_MIN;
    int size=5;
    int i=0;
    for(i=0;i<size;i++){
      if(num[i]>largest)
      {
        largest=i;
        
      }
    }
    cout<<largest;
}