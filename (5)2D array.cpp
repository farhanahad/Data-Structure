#include<iostream>
using namespace std;
int main()
{
    int i,j,r1,c1,r2,c2,m1[100][100],m2[100][100],m3[100][100];
    cout<<"Enter the size of the first matrix:";
    cin>>r1>>c1;
    cout<<"Enter elements:"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>m1[i][j];
        }
    }

    cout<<"Enter the size of the second matrix:";
    cin>>r2>>c2;
    cout<<"Enter elements:"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>m2[i][j];
        }
    }

    cout<<"First matrix:"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<" "<<m1[i][j];
        }
        cout<<endl;
    }
     cout<<"Second matrix:"<<endl;
     for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<" "<<m2[i][j];
        }
        cout<<endl;
    }
}
