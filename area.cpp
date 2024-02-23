#include <iostream>
using namespace std;

int main()
{
    double a,b,h,l,r;
    int n;
    cout <<"enter your choice "<<endl;
    cout<<"\n1.Rectangle"<<"\n2.Circle"<<"\n3.square"<<"\n4.triangle"<<endl;
    cin>>n;

    if(n==1)
    {   cout<<"enter length"<<endl;
        cin>>l;
        cout<<"enter breadth"<<endl;
        cin>>b;
        cout<<"area of rectangle = "<<l*b<<endl;
    }
    else if(n==3)
    {   cout<<"enter radius ";
        cin>>r;
        cout<<"area of circle :"<<2*3.14*r*r;
    }
    else if(n==3)
    {   cout<<"enter side :";
        cin>>a;
        cout<<"area of square :"<<a*a;
    }
    else if(n==4)
    {
        cout<<"enter base"<<endl;
        cin>>b;
        cout<<"enter height :";
        cin>>h;
        cout<<"area of triangle :"<<0.5*b*h;
    }
    else
    {
        cout<<"wrong choice";
    }
        
    
    return 0;
}