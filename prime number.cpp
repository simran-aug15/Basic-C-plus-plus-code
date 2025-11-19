#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n is ";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"number is not a prime number"<<endl;

        }
    }
    cout<<"number is a prime number";
    
}