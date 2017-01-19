#include <bits/stdc++.h>
#define dbug(x) cout << '>' << #x << ':' << x << endl

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    string sat[8] = { "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY" };
    string sun[8] = { "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY" };
    string mon[8] = { "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY" };
    string tu[8] = { "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY" };
    string we[8] = { "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY" };
    string th[8] = { "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY" };
    string fr[8] = { "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY" };

    int t, k, x, y, kase = 1, p;
    cin>>t;
    string s1, tm;
    while(t--)
    {
        s1="", tm = "";
        cin>>x>>y>>s1;

        k = ( y - x ) % 7;
        //k = abs(k);
        if ( x > y ){
                k = (6-(x-y)%7);

        }




        if ( s1== "SATURDAY") { tm = sat[k]; }
        else if ( s1== "SUNDAY") { tm = sun[k]; }
        else if ( s1== "MONDAY") { tm = mon[k]; }
        else if ( s1== "TUESDAY") { tm = tu[k]; }
        else if ( s1== "WEDNESDAY") { tm = we[k]; }
        else if ( s1== "THURSDAY") { tm = th[k]; }
        else if ( s1== "FRIDAY") { tm = fr[k]; }
        //dbug(k);
        //tm = sat[k];
        if ( x > y ) tm = sat[k];

        cout<<"Case "<<kase++<<": "<<tm<<'\n';
    }

    return 0;
 }
