//program using constructor in class
#include<iostream>
using namespace std;
class Display{ public:
    Display()
    {
        cout<<"I am a constructor";

    }

};
int main(){
    Display d1;
    return 0;
}