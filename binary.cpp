#include <iostream>
using namespace std;

int main()
{
    int n=10;
    int arr[n],mid,key,index;
    int x=0;
    
    cout<<"enter size ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i<<" ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
    cout<<"\nsorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nenter element to find ";
    cin>>key;
    
    int i = 0;
    int j = n-1;

    while (i<=j) 
    {
        int mid = i+(j-i)/2;
        if (arr[mid]==key) 
        {
            cout<<"Element is present at index "<<mid<<endl;
            return 0;
        } 
        else if (arr[mid]<key) 
        {
            i=mid+1;
        } 
        else 
        {
            j=mid-1;
        }
    }

    cout<<"Element not found"<<endl;
    return 0;
}