#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main()
{
    long long t, n, m[100], kase=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long p = n, i = -1;
        while(p--)
        {
            cin>>m[++i];
        }
        long long ans=m[0];
        for(long long j=1; j<=i; j++)
        {
            ans *= (m[j]-j);
        }
        cout<<"Case "<<++kase<<": "<<ans%MOD<<endl;
    }


    return 0;
}
