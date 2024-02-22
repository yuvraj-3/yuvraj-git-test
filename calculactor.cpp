#include <iostream>
using namespace std;

int main()
{
    int x,y;
    char n;
    cout<<"enter the first number";
    cin>>x;
    cout<<"enter the second number: ";
    cin>>y;
    cout<<"select operator +,-,*,/"<<endl;
    cin>>n;

    switch (n)
    {
        case '+':
        cout<<x+y;
        break;
        case '-':
        cout<<x-y;
        break;
        case '*':
        cout<<x*y;
        break;
        case '/':
        cout<<x/y;
        break;
        default:
        cout<<"wrong operator";
        break;
    }
    return 0;
}