#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    float t,a[1001],s,c,avg=0,per=0;
    cin>>t;
    while(t--)
    {
        float sum=c=avg=0.0;
        cin>>s;
        for(int i=0;i<s;i++)
        {
            cin>>a[i];
            sum+=a[i];

        }
        avg=sum/s;
        for(int i=0;i<s;i++)
        {
            if(avg<a[i])

                c++;
        }
        per=(100*c)/s;
        printf("%.3f",per);
        cout<<"%"<<endl;


    }
}
