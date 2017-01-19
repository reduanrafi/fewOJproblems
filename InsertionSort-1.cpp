#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,j,temp,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;

      while((temp<a[j])&&j>=0)
      {
          a[j+1]=a[j];
          j--;
      }
      a[j+1]=temp;
    }
    cout<<"After sorting :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
