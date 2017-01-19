#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,step=0;
    cin>>n;
    while(n){
        if(n>=5) n-=5;
       else if(n>=4) n-=4;
       else if(n>=3) n-=3;
       else if(n>=2) n-=2;
       else if(n>=1) n-=1;
        step++;
    }
    cout<<step<<endl;
    return 0;
}
