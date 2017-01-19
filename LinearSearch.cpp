#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a[100],i,check,loc=0,flag=0;
     cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the number to search"<<endl;
    cin>>check;
    for(i=0;i<n;i++)
    {
        if(a[i]!=check)
            {flag=1;}
          if(a[i]==check)
           loc=i;
        //check=a[i]

    }
    if(flag==1)
        cout<<"The number is not found"<<endl;
    else
    cout<<"The number found at location "<<loc+1<<endl;
}
