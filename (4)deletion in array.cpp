#include<iostream>
using namespace std;
int main()
{
     int arr[10],i,n,x,pos;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements of the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position that you delete the array:";
    cin>>pos;
    if(pos < 0 || pos > n)
    {
        cout<<"Invalid position! Please enter position between 1 to "<< n;
    }
    else
    {
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    }
     cout<<"\nElements of array after delete are : ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
