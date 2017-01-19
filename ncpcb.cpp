#include <bits/stdc++.h>

#define dbug(x) cout << '>' << #x << ':' << x << endl
#define clr(x, v) memset(x, v, sizeof(x))
#define clr1(x) memset(x, 1, sizeof(x))
#define clr0(x) memset(x, 0, sizeof(x))
#define clrn(x) memset(x, '\0', sizeof(x))

#define eef else if
#define inpi inputt[i]
#define sf scanf
#define pf printf
#define i64 long long
#define ui64 unsigned long long

#define pcount(num)  __builtin_popcount(num)
#define ALL(x) x.begin(), x.end()
#define sz size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ff(i,s,e) for(int i=(s);i<(int)(e);i++)
#define FORIT(i, m) for (__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)



using namespace std;





int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int a, b, t, k, cnt, x, y, i, kase = 1;
    cin>>t;
    string s1="";
    map<string, int> mm;
    mm["SATURDAY"]= 0;
    mm["SUNDAY"]= 1;
    mm["MONDAY"]= 2;
    mm["TUESDAY"]= 3;
    mm["WEDNESDAY"]= 4;
    mm["THURSDAY"]= 5;
    mm["FRIDAY"]= 6;

    map<int, string> mm2;
    mm2[0]= "SATURDAY";
    mm2[1]= "SUNDAY";
    mm2[2]= "MONDAY";
    mm2[3]= "TUESDAY";
    mm2[4]= "WEDNESDAY";
    mm2[5]= "THURSDAY";
    mm2[6]= "FRIDAY";

    while(t--)
    {

        cin>>x>>y>>s1;
        k = mm[s1]-1;

        for(i = x; i <= y; i++){
            k++;
            //dbug(k);
            //if ( k == 7 ) k = 0;
        }
        //puts("Loop Over");
        //dbug(k);
        //int pp = k%7;
        //if ( pp==0 ) pp = 1;
        cout<<"Case "<<kase++<<": "<<mm2[k%7]<<'\n';
    }




    return 0;
 }
