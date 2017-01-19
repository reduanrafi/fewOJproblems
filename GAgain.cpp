#include <bits/stdc++.h>
#define i64 long long
#define ui64 unsigned long long
#define sf scanf
#define pf printf
#define pb push_back
#define dbug(x) cout << '>' << #x << ':' << x << endl
#define clr0(x) memset(x, 0, sizeof(x))

ui64 mp[1000];

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int T, kase=0, i, j, k, jora;
    ui64 a, b, sum, mx, total;
    cin>>T;
    while(T--)
    {
        cin>>jora;
        clr0(mp);
        //vector < ui64 > v;
        //map <ui64, ui64> mp;
        set < ui64 > st;
        total =0 ;
        for(int x=0; x<jora; x++)
        {
            cin>>a>>b;
            total+=a;
            mp[b] += a;
            st.insert(b);
            //for(int i=0; i<a; i++) v.pb(b);

        }
        mx =0;
        /*sort(v.begin(), v.end());
        int Sz = v.size();
        for(int i=0; i<Sz; i++)
        {
            ui64 tmp = v[i]*(Sz-i);
            mx = max(mx, tmp);

        } */
        ui64 tot = total;
        for (std::set<ui64>::iterator it=st.begin(); it!=st.end(); ++it)
            {
                ui64 t = *it;
                //dbug(t);
                mx = max(mx, t*tot);
                //dbug(mx);
                tot = tot - mp[t];

                }
        cout<<"Case "<<++kase<<": "<<mx<<'\n';



    }
    return 0;
}
