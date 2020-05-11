#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,x,y;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements of the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the insertion value:";
    cin>>x;
    cout<<"Enter the position that you insert:";
    cin>>y;
    if(y>n+1 || y<0)
    {
        cout<<"Invalid position! Please enter position between 1 to "<<n;
    }
    else
    {
        for(i=n;i>=y;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[y-1]=x;
        n++;
        cout<<"Elements are ";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
