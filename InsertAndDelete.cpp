#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a[100],i,j,pos=0,in,position=0;
    cin>>n;
    cout<<"Enter "<<n<<" Numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter position to Delete "<<endl;
    cin>>pos;
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"New array "<<endl;
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"Enter a position to insert into the array";
    cin>>position;
    cout<<"Enter a number to insert into the array";
    cin>>in;
    --position;
    for(i=n-1;i>=position;i--)
    {
       a[i+1]=a[i];

    }
    a[position]=in;
    cout<<"New array "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }


return 0;
}
