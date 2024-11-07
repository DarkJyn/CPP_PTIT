#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

ll chiadu(string a,ll b){
	ll du=0;
    for(int i = 0;i < a.length();i++)
        du=(du * 10 + (a[i]-48)) % b;
    return du;
}

ll poww(ll n,ll k,ll mod){
	if(k == 1) return n;
	ll x = poww(n,k/2,mod);
	if(k % 2 == 0) return (x * x) % mod;
	else return (((x * x) % mod) * n) % mod;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
	cin >> t;
	while(t--){
		string a;
		ll b,m;
		cin >> a >> b >> m;
		ll k = chiadu(a,m);
		cout << poww(k,b,m) << "\n";
	}   
}