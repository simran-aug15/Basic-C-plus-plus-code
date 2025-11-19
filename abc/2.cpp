#include<iostream>

using namespace std;
int main(){
    int num[]={1,2,3,4,5};
    int sum=0;
    int product=1;
    int size=5;

    for(int i=1;i<size;i++){
   sum=sum+num[i];
    }
    for(int i=1;i<size;i++)
    {
        product=product*num[i];
    }
    cout<<sum<<endl;
    cout<<product;
}