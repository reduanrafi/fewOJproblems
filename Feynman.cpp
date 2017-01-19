#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,sum=1;
   while(cin>>n){
        if (n==0)
   return 0;
    sum=0;
   for(int i=0;i<n;i++)
    {
        sum=sum+(i+1)*(i+1);

    }
     cout<<sum<<endl;
   }

    return 0;
}
