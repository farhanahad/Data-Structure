#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,s=0,x;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search:";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            s=1;
            break;
        }
    }
    if(s==1)
    {
        cout<<"Yes,number is present in the array at position "<<i+1;
    }
    else
        cout<<"Number not found";

}
