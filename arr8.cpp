#include <iostream>
using namespace std;

int main()
{
    int n=10,a[n],i,j;
	cout<<"enter size";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter element "<<i<<" ";
		cin>>a[i];
	}
	cout<<"array element\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
    cout<<"\nenter position\n";
    cin>>j;
    for(i=n;i>=j;i--)
    {
        a[i+1]= a[i];
    }
    cout<<"enter the element\n";
    cin>>a[j];
    for(i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}