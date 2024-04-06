#include <iostream>
using namespace std;

int main()
{
    int fact=1;
    int x;
    cout<<"enter number ";
    cin>>x;
    while(x>1)
    {
    fact*=x;
    x=x-1;
    }
    cout<<"The factorial of the number is "<<fact;
    return 0;
}