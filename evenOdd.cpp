#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,odd;
    while(cin>>n)
    {
        if(n%2==0)
            cout<<"The number is even"<<endl;
        else cout<<"The Number is Odd"<<endl;
    }
    return 0;
}
