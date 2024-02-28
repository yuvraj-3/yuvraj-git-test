#include <iostream>
using namespace std;

int main()
{
	int n=10,a[n],i,j;
	cout<<"enter element";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	j=n;
	for(i=j;i>=0;i--)
	{
		a[n]=a[n+1];
	}
	cout<<"\nenter the element at end"<<endl;
	cin>>a[n];
	for(i=0;i<n+1;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}