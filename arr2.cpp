#include <iostream>
using namespace std;

int main()
{
    int n=4;
    int arr[n];
    int revarr[n];
    
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i<<" ";
        cin>>arr[i];
    }
    cout<<"array element"<<endl;
    for(int i=0;i<n;i++)
    {
        
        cout<<arr[i];
        cout<<endl;
    }
    
    for(int i=0; i<n; i++)
    {
            revarr[i]=arr[n-i-1];
        
    }
    cout<<"reverse array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<revarr[i];
        cout<<endl;
    }
    return 0;
    
}