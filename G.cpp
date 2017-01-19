#include <bits/stdc++.h>
#define i64 long long
#define ui64 unsigned long long
#define sf scanf
#define pf printf
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int T, kase=0, i, j, k, jora;
    ui64 a, b, sum, mx;
    cin>>T;
    while(T--)
    {
        cin>>jora;
        vector < ui64 > v;
        for(int x=0; x<jora; x++)
        {
            cin>>a>>b;
            for(int i=0; i<a; i++) v.pb(b);

        }
        mx =0;
        sort(v.begin(), v.end());
        int Sz = v.size();
        for(int i=0; i<Sz; i++)
        {
            ui64 tmp = v[i]*(Sz-i);
            mx = max(mx, tmp);

        }

        cout<<"Case "<<++kase<<": "<<mx<<'\n';



    }
    return 0;
}
