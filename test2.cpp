#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int i,n,l,w,h;
int test,sum1 , sum;
test=sum1 = sum=0;
while(scanf("%d",&n)==1)
{
if(n==0) return 0;

for(i=1;i<=n;i++)
{

scanf("%d%d%d",&l,&w,&h);
if(h>=test)
{
sum = l * w * h;
if(test == h)
{
if(sum>sum1)
{
sum1 = sum;
}
}
if(h>test)
{
test = h;
sum1 = sum;
}
}
}
printf("%d\n",sum1);
}
return 0;
}
