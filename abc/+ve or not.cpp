// positive or not
#include <iostream>
using namespace std;
int main()
{
   int a = 0;
   for (;;)
   {
      cout << "Enter number=";
      cin >> a;
      if (a < 0)
      {
         cout << "Number is negative";
         break;
      }
   }
}
