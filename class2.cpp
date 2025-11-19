//create a car class with attribute brand ,model,and year
#include <iostream>
#include <string>
using namespace std;
class car
{
public:
    string brand = "BMW";
    int year = 2016;
    int model = 16;
    car()
    {
        cout << "This os a constructor" << endl;
    }

} ;

int main () {
    car c1;
    cout<<"Car brand is = " <<c1.brand <<endl ;
    cout<<"Car  model is = " <<c1.year <<endl ;
    cout<<"Car  model is = " <<c1.model <<endl ;
    return 0 ;
    

}
