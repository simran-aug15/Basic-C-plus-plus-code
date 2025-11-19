// program using single inheritance
#include <iostream>
using namespace std;
class Display
{
public:
    Display()
    {
        cout << "my name is simran";
    }
};
class Show : public Display
{
};
int main()
{
    Show S1;
    return 0;
}
