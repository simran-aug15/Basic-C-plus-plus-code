//using else if
#include <iostream>
using namespace std;
int main()
{
   int marks;
   cout << "marks";
   cin >> marks;
   if (marks >= 90)
   {
      cout << "grade A" << endl;
   }
   else if (marks >= 80)
   {
      cout << "grade B";
   }
   else if (marks >= 70)
   {
      cout << "grade C";
   }
   else
   {
      cout << "default";
   }

   return 0;
}