#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long d1,d2,d3,D,D1,D2,D3;
    cin>>d1>>d2>>d3;
    D=2*d1+2*d2;
    D1=d1+d2+d3;
    D2=2*d1+2*d3;
    D3=2*d2+2*d3;

    if(D<=D1&&D<=D2&&D<=D3)
        cout<<D<<endl;
    else if(D1<=D&&D1<=D2&&D1<=D3)
        cout<<D1<<endl;
    else if(D2<=D&&D2<=D1&&D2<=D3)
        cout<<D2<<endl;
    else if(D3<=D&&D3<=D1&&D3<=D2)
        cout<<D3<<endl;
        return 0;
}

