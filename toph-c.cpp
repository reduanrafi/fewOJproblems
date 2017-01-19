#include <bits/stdc++.h>
#define dbug(x) cout<<#x <<" : "<<x<<endl
#define pf printf
#define sf scanf
using namespace std;
int main(){

    int a, b, c=-1, f1, t, mx=0, i;
    vector<int> n;
    scanf("%d", &t);
    while(t--){

        sf("%d", &b);
        ++c;
        n.push_back(b);


    }
    f1 = 1;
    mx = *max_element(n.begin(), n.end());
        for( i=2; i<=mx+1; ){
            for(int j=0; j<n.size(); j++){
                if ( n[j]%i==0 ){
                    f1 = 0;
                    break;
                }
            }
            if ( f1==1 )  break;
            i++;
        }

        pf("%d\n", i);
        n.clear();


    return 0;
}
