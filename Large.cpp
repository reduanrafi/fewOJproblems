#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[100],n,temp=0,l;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n;i++)
    {
        if(a[i]>temp)
        {
            temp=a[i];
             l=i;

        }

    }
    cout<<"Largest Element "<<temp<<"\n Position :"<<l+1;
    return 0;
}
