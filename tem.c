

    /*
    	computing binomial coefficients i.e. N choose R using O(n) precomputation.
    	use this for large value of N and whem (NchooseR)%prime is used;
    */
    //by Tanmay Chaudhari
    #ifdef _MSC_VER
    #define _CRT_SECURE_NO_WARNINGS
    #endif
    //#pragma comment(linker, "/STACK:66777216")
    #include <bits/stdc++.h>
    using namespace std;

    #define si(a)				scanf("%d",&a)
    #define sl(a)				scanf("%lld",&a)
    #define pi(a)				printf("%d\n",a)
    #define pl(a)				printf("%lld\n",a)

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

    #define TRACE

    #ifdef TRACE
    #define trace1(x)                cerr << #x << ": " << x << endl;
    #define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
    #define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
    #define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
    #define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
    #define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

    #else

    #define trace1(x)
    #define trace2(x, y)
    #define trace3(x, y, z)
    #define trace4(a, b, c, d)
    #define trace5(a, b, c, d, e)
    #define trace6(a, b, c, d, e, f)

    #endif

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
