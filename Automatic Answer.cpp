#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    long long n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n = abs((((n * 63 + 7492) * 5 - 498)/10)%10);
        cout<<n<<endl;

    }
}
