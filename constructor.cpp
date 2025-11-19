//program using constructor

#include<iostream>
#include<string>
using namespace std;
class teacher{
 public:
 int number;
 string name;
 teacher()
 {
    cout<<"I am a Constructor"<<endl;
 }
 int display()
 {
    cout<< "name is  "<<name<<endl<<"number is  "<<number<<endl;
 }

};
int main()
{
    teacher t1;
    t1.name="simran";
    t1.number=15;
    t1.display();
    return 0;



}