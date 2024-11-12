#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
ll power(ll x, ll y, ll p){
    ll res = 1;
	while(y > 0){
        if(y & 1) res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
ll mod(ll n,ll p){
    return power(n,p-2,p);
}
ll nCr(ll n, ll r, ll p){
    if(n < r) return 0;
    if(r == 0) return 1;
    ll a[n+1];
    a[0] = 1;
    for(int i = 1;i <= n;i++) a[i] = (a[i-1] * i) % p;
    return (a[n] * mod(a[r],p) % p * mod(a[n - r],p) % p) % p;
}
signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int t;
	cin >> t;
	while(t--){
		ll a,b,c = 1e9+7;
		cin >> a >> b;
		cout << nCr(a,b,c) << endl;
	}	
}