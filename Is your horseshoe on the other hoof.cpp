#include<iostream>
#include<set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int a, b, c, d;

    while( cin>>a>>b>>c>>d )
    {
        set<long long  > st;
        st.insert(a);
        st.insert(b);
        st.insert(c);
        st.insert(d);
        cout<<st.size()<<'\n';


    }

     return 0;
 }


