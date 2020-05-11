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
    cout<<"Enter the position that you insert the array:";
    cin>>pos;
    cout<<"Enter the element that you insert the array:";
    cin>>x;
    int j=n;
    while(j>=pos)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[pos]=x;
    n=n+1;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }



}
