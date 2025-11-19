#include<iostream>
using namespace std;
class Table{
    public:
    int num;
    int s;
    int display(){
        for(int i=1;i<=10;i++)
        {
            cout<<num<<"*"<<i<<"="<<num*i;
            cout<<endl;
        }
    }

};
int main(){
    Table t1;
    t1.num=2;
   t1.display();
    return 0;
}