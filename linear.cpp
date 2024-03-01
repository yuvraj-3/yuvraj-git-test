#include <iostream>
using namespace std;

int main()
{
    int n=10;
    int arr[n],i,key,index;
    int x=0;
    
    cout<<"enter size ";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        cout<<"enter element "<<i<<" ";
        cin>>arr[i];
    }
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nenter element to find ";
    cin>>key;
    for(i=1;i<=n;i++)
    {
        if(arr[i]==key)
        {
            index=i;
            x=x+1;
        }
    }
    if(x>0)
    {
        cout<<"element found at index "<<index;
    }
    else
    {
        cout<<"element not found ";
    }

    return 0;
}