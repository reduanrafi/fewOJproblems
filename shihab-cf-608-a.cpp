#include <bits/stdc++.h>
#define dbug(x) cout<<#x<<" : "<<x<<endl
using namespace std;


int main(){
    int a[100], n, s, ini, maxx=0, b, minn = 10000, tm;
    while(cin>>n>>s){
        int m = n;
        memset(a, -1, sizeof(a));
        while(m--){
            cin>>b;
            cin>>a[b];
            maxx = max(maxx, b);
            minn = min(minn, b);
        }
        tm = s-maxx;
        ini = maxx;
        for(int i=maxx; i>=minn; i-- ){
            if ( a[i]!= -1 ){
                tm += (ini-i);
                if ( a[i] > tm ){
                    tm += (a[i]-tm);
                }
            ini = i;
            }
        }
        cout<<tm+minn<<'\n';
    }

return 0;
}
/*
3 7
2 1
3 8
5 2

*/
