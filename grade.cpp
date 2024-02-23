#include <iostream>
using namespace std;

int main()
{
    double x,a,b;
    cout<<"Enter your total score :";
    cin>>a;
    cout<<"Enter total marks :";
    cin>>b;

    x=a/b*100;
    cout<<"percentage"<<x<<endl;

    if(x>90 && x<=100)
    {
        cout<<"Grade : A+";
    }
    else if(x>80 && x<=90)
    {
        cout<<"Grade : A";
    }
    else if(x>70 && x<=80)
    {
        cout<<"Grade : B+";
    }
    else if(x>60 && x<=70)
    {
        cout<<"Grade : B";
    }
    else if(x>50 && x<=60)
    {
        cout<<"Grade : C+";
    }
    else if(x>40 && x<=50)
    {
        cout<<"Grade : C";
    }
    else if(x>30 && x<=40)
    {
        cout<<"Grade : D";
    }
    else if(x>20 && x<=30)
    {
        cout<<"Grade : E";
    }
    else if(x<20)
    {
        cout<<"F"<<endl;
    }
    return 0;

}