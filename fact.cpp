#include <iostream>
using namespace std;
int main()
{
   int fact = 1;
   int i = 5;
   while (i >= 1)
   {
      fact = fact * i;
      i--;
   }
   cout << "fact is" << fact;
   return 0;
}