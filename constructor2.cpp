//using parameterised and copy constructor
#include<iostream>
using namespace std;
class Display{
    int value;
    string name;
    public:
    Display(int value,string name){
        this->value=value;
        this->name=name;
    }
    Display(Display &obj){
        this->value=obj.value;
        this->name=obj.name;
    }
   void getinfo(){
    cout<<"name is  "<<name<<endl;
    cout<<"value is  "<<value<<endl;
   }
    
};
int main(){
    Display d1(4,"Simran");
    Display d2(d1);
    d1.getinfo();
    d2.getinfo();
    return 0;
}