#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){

int a[3100],b[3100],n,check,c,i;
    while(cin >> n){
                    c=1;
        for(i=0;i<n;i++)
            {
                cin>>a[i];

            }
        for(i=1;i<n;i++)
        {
            b[i]=abs(a[i]-a[i-1]);
           // cout<<b[i]<<"  ";

        }
        sort(b,b+i);
        for(i=1;i<n;i++)
        {
           //cout<<b[i]<<" ";
            if(b[i]!=i)


                {
                    c=0;
                    break;
                }
        }
        if(c==0)
        cout<<"Not jolly\n";
        else
        cout<<"Jolly\n";
    }
return 0;
}

