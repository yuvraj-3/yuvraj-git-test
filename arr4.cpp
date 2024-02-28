#include <iostream>
using namespace std;

int main() 
{
    int n=4;
    int arr[n];
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
    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            even_no++;
            
        }
        else 
        {
            odd_no++;
            
        }
    }
    cout << "Number of even elements: " << even_no << endl;
    cout << "Number of odd elements: " << odd_no << endl;
    
    return 0;
}