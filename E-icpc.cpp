#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, A, cnt;
    string S;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>S;
        a=b=0;
        for(int i=0; i<S.size(); i++)
        {
            if (S[i]== '^') a++;
            else if (S[i]== '_') b++;
        }
        A = a/2;
        cout<<min(A, b)<<endl;
    }


    return 0;
}
