// function overloading using different type of parameters
#include<iostream>
using namespace std;
class Display{
    public:
    int add(int a,int b){
        return a+b;
    }
 float add(float a,float b){
    return a+b;
 }

};
int main(){
    Display d1;
    cout<<d1.add(3.4f,5.8f)<<endl;
    cout<<d1.add(5,8);
    return 0;
}