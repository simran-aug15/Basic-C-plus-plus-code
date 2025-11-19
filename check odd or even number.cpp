#include<iostream>
using namespace std;
class Table{
    public:
    int num;
    
    int display(){
        if(num%2==0)
        {
            cout<<"num is even";
            cout<<endl;
        }
        else{
            cout<<"num is odd";
        }
    }
    int in(){
        cout<<"enter the num";
        cin>>num;
    }

};
int main(){
    Table t1;
    t1.in();
   t1.display();
    return 0;
}