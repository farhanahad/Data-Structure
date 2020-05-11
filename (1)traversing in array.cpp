#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,a,n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the element of the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(i=0;i<n;i++)
     {

    cout<<"Linear array ["<<i<<"]="<<arr[i]<<endl;
     }
}
