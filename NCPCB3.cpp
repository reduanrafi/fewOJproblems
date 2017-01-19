#include <bits/stdc++.h>
#define dbug(x) cout << '>' << #x << ':' << x << endl

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    string sat[7] = { "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY" };
    string sun[7] = { "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY" };
    string mon[7] = { "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY" };
    string tu[7] = { "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY" };
    string we[7] = { "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY" };
    string th[7] = { "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY" };
    string fr[7] = { "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY" };

    int t, k, x, y, kase = 1;
    cin>>t;
    string s1, tm;
    while(t--)
    {
        s1="", tm = "";
        cin>>x>>y>>s1;

        k = ( y - x ) % 7;

        if ( s1== "SATURDAY") { tm = sat[k]; }
        else if ( s1== "SUNDAY") { tm = sun[k]; }
        else if ( s1== "MONDAY") { tm = mon[k]; }
        else if ( s1== "TUESDAY") { tm = tu[k]; }
        else if ( s1== "WEDNESDAY") { tm = we[k]; }
        else if ( s1== "THURSDAY") { tm = th[k]; }
        else if ( s1== "FRIDAY") { tm = fr[k]; }
        //dbug(k);
        //tm = sat[k];

        cout<<"Case "<<kase++<<": "<<tm<<'\n';
    }

    return 0;
 }
