#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x,y,tc,dif,sum,minst,z;
    cin>>tc;
    while(tc--)
    {
        cin>>x>>y;
        dif=y-x;
        minst=0;
        if(dif!=0)
        {

            z=2;
            sum=0;
            while(dif>sum)
            {
                sum+=z/2;
                minst++;
                z++;

            }
        }
        cout<<minst<<endl;

    }
}
