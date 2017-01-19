#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,a[5],cnt,i;
   while( cin>>t){
       cnt=0;

        for( i=0;i<5;i++)
        {
            cin>>a[i];
            if(a[i]==t)
                cnt++;

        }
        cout<<cnt<<endl;
   }
   return 0;
}
