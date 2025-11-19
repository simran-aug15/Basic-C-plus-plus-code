#include <iostream>
using namespace std;
int main()
{
   int fact = 1;
   int i = 5;
   do
   {
      fact = fact * i;
      i--;
   } while (i >= 1);
   cout << "fact is" << fact;
   return 0;
}