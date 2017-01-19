#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,l,w,h,cnt=0;
    cin>>n;
    while(n--){

        cin>>l>>w>>h;
		printf("Case %d: ",++cnt);
        if(l<=20&&w<=20&&h<=20)
        {
            cout<<"good"<<endl;
        }
        else cout<<"bad"<<endl;
    }
    return 0;
}
