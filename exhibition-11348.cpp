#include <bits/stdc++.h>
using namespace std;

int main(){

    int k, n, a, b;
    cin>>k;
    while(k--){
        cin>>n;
        int m = n;
        map<int, int> mp[m];
        map<int, float> mp2;
        for(int i=1; i<=n; i++){
            cin>>a;
                for(int j=1; j<=a; j++){
                    cin>>b;
                    mp[i][b]=b;

            }

        }
        for(int i=1; i<=n; i++){ // For All map
            mp2[i]=0.0;
            for(int j=1; j<=mp[i].size(); j++){ // For elements in each map
                if ( j==i ) continue;

            //    if ( mp[] )
            }

        }



    }




return 0;
}
