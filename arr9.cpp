#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x,size;
    double arr[100];
    double mean =0,variance= 0,standard_deviation=0;
    cout<<"enter the total no. of element ";
    cin>>size;
    for (int i = 0; i < size; i++) 
    {
       cout<<"enter element ";
       cin>>arr[i];
    }
    for (int i = 0; i < size; i++) 
    {
        mean += arr[i];
    }
    mean =mean/size;
    cout<<"mean = "<<mean<<endl;
    for (int i = 0; i < size; i++) 
    {
        variance += (arr[i]-mean)*(arr[i]-mean);
    }
    variance=variance/size;
    cout<<"variance = "<<variance<<endl;
    standard_deviation=sqrt(variance);
    cout<<"standard_deviation = "<<standard_deviation;

    return 0;
}