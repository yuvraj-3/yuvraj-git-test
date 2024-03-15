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
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i++;
        
    }

    cout<<"wave array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }

    return 0;

}