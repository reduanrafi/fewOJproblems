#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T, cnt, flag, num, p, i, j, kase=0;
    string S[1000], jalil="";
    scanf("%d", &T);
    for(int k=0; k<T; k++)
    {
        scanf("%d", &num);
        for( p=0; p<num; p++)
        {
        cin>>S[p];

        }
        cin>>jalil;

                    printf("Case %d:\n", ++kase);

        for(i=0; i<num; i++)
        {
            //int mx = max(jalil.size(), S[i].size());
            cnt = 0;
            int jal = jalil.size();
            int nam = S[i].size();
            if ( jalil.size() != S[i].size() ) continue;
            for( j=0; j<jal; j++ )
            {
                if ( jalil[j] != S[i][j] ) cnt++;
                if ( cnt > 1 ) break;

            }
            if ( cnt == 1 || cnt == 0 ) cout<<S[i]<<'\n';

        }








    }
    return 0;
}
