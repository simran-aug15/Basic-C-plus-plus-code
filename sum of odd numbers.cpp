#include <iostream>
using namespace std;
int main()
{
    int n = 11;
    int sum = 0;
    for (int i = 1; i <= n; i = i + 2)
    {
        cout<<"the value of i is "<<i<<endl;
        sum = sum + i;
    }
    cout << "The sum is =" << sum;
    return 0;
}