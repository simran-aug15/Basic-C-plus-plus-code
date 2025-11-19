// binary operator overloading using friends function
#include<iostream>
using namespace std;

class Display {
    int real;
    int img;

public:
    Display() {
        real = 0;
        img = 0;
    }

    Display(int r, int i) {
        real = r;
        img = i;
    }

    void in() {
        cout << real << "+" << img << "i" << endl;
    }

    // Operator overloading
     friend Display operator+(Display d1,Display d2);
};
// Operator overloading
Display operator+(Display d1,Display d2) {
    Display temp;
    temp.real = d1.real + d2.real;
    temp.img = d1.img + d2.img;
    return temp;
}

int main() {
    Display d1(3, 4);
    Display d2(7, 9);
    Display d3;
    d3 = d1 + d2;
    d3.in();  // Output the result
    return 0;
}
