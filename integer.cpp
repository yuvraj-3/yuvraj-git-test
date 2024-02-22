#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    if(n >0) 
    {
    cout<<"You entered a positive integer: "<<n<<endl;
    } 
    else if (n< 0) 
    {
    cout<<"You entered a negative integer: "<<n<<endl;
    } 
    else 
    {
    cout<<"You entered 0."<<endl;
    }
    return 0;
}
