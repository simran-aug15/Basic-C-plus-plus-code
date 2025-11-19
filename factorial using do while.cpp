#include <iostream>
using namespace std;
int main()
{
   int fact = 1;
   int i = 5;
   int num=1;
   do
   {
      fact = fact * num;
      num++;
   } while (num<=i);
   cout << "fact is" << fact;
   return 0;
}