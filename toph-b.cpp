#include <bits/stdc++.h>
#define dbug(x) cout<<#x <<" : "<<x<<endl
#define pf printf
#define sf scanf
using namespace std;
int main(){

    int a, b, c, f1, f2, f3, t;
    scanf("%d", &t);
    while(t--){
        sf("%d%d%d", &a, &b, &c);
        f1 = 1;
        if ( a+b <= c ) f1 = 0;
        if ( b+c <= a ) f1 = 0;
        if ( a+c <= b ) f2 = 0;

        if ( f1 == 1 ) pf("Yes\n");
        else pf("No\n");


    }

    return 0;
}
