// square root of number
#include <iostream>
using namespace std;
int square(int a);
int main()
{
    int a = 4;
    square(a);
    return 0;
}
int square(int a)
{
    int s = a * a;
    cout << "square root is" << s;
}