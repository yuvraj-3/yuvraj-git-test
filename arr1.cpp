#include <iostream>
using namespace std;

int main()
{
    int n=4;
    int arr[n];
    
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
        for(int j=i+1; j<n; j++) 
        { 
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
    
    return 0;
    
}