#include <iostream>
using namespace std;

int main() 
{
    int n=4;
    int arr[n],odd[n],even[n];
    int even_no = 0;
    int odd_no = 0;
    
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
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[even_no++]=arr[i];
        }
        else 
        {
            odd[odd_no++]=arr[i];
        }
    }
    cout<<"even elements are ";
    for(int i=0;i<odd_no;i++)
    {
        cout<<odd[i]<<" ";
    }
    cout<<"\nodd elements are ";
    for(int i=0;i<even_no;i++)
    {
        cout<<even[i]<<" ";
    }
    
    return 0;
}
