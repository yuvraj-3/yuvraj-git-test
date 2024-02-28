#include <iostream>
using namespace std;

int main()
{
	int n=10,a[n],i,j;
	cout<<"enter element";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	j=n;
	n=n+1;
	for(i=j;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	cout<<"enter the element begning"<<endl;
	cin>>a[0];
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}