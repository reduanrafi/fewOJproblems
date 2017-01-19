
    #ifdef _MSC_VER
    #define _CRT_SECURE_NO_WARNINGS
    #endif
    //#pragma comment(linker, "/STACK:66777216")
    #include <bits/stdc++.h>
    using namespace std;


    typedef long long			LL;
    typedef vector<int>			vi;
    typedef pair<int, int>		ii;
    typedef vector<vi>			vvi;
    typedef vector<ii>			vii;

    #define SET(a,b)			memset(a,b,sizeof(a))
    #define forall(i,a,b)		for(int i=a; i<b; i++)
    #define forrev(i,a,b)		for(int i=a; i>=b; i--)
    #define forr(it,container)  for(auto it=container.begin(); it!=container.end(); it++)
    #define w(t)				int t;si(t);while(t--)



    const int MOD = 1e9 + 7;
    #define N 2123456

    LL fac[N], ifac[N];

    LL PowerMod(LL a, LL n){
    	LL ret = 1;
    	while (n){
    		if (n & 1){
    			ret *= a;
    			ret %= MOD;
    		}
    		a *= a;
    		a %= MOD;
    		n /= 2;
    	}
    	return ret;
    }

    inline void precompute(){
    	int i;
    	fac[0] = 1;
    	for (i = 1; i < N; i++){
    		fac[i] = (i * fac[i - 1]) % MOD;
    	}
    	ifac[N - 1] = PowerMod(fac[N - 1], MOD - 2);
    	for (i = N - 2; i >= 0; i--){
    		ifac[i] = ((i + 1) * ifac[i + 1]) % MOD;
    	}
    }

    LL com(int n, int r){
    	LL ret = fac[n];
    	ret *= ifac[r];
    	ret %= MOD;
    	ret *= ifac[n - r];
    	ret %= MOD;
    	return ret;
    }

    int main()
    {
    	//freopen("input.txt","r",stdin);
    	//freopen("output.txt","w",stdout);
    	precompute();
    	pl(com(4892,231));
    	return 0;
    }
