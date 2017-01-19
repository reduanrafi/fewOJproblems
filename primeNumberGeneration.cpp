#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,i,j,flag,c=0;
    cin>>a;
    for(i=2;i<=a;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;

                break;

            }
        }
        if(flag==0)
        {

            printf("%d\n",i);
            c+=1;
        }
    }

    cout<<"Numbers of prime between "<<a<<" and "<<c<<endl;
    return 0;
}
