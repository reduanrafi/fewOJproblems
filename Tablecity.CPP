#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n=1000,i;
    printf("%d\n",2*n);
   for(i=1;i<=n;i++)
    {
       printf("%d %d %d %d\n",i,1,i,2);
    }
     for(i=n;i>=1;i--)
    {
        printf("%d %d %d %d\n",i,1,i,2);
    }
    return 0;
}
