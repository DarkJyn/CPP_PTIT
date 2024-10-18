#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif	
	ll t;
	cin >> t;
	while(t--){
		ll n,q;
		cin >> n >> q;
		ll a[n+2];
		for(ll i = 0;i < n;++i) cin >> a[i];
		ll sum[n+2] = {0};
		sum[0] = a[0];
		sum[-1] = 0;
		for(ll i = 0 ;i < n;++i){
			sum[i+1] = a[i] + sum[i];
		}
		while(q--){
			ll l,r;
			cin >> l >> r;
			cout << sum[r] - sum[l-1]<<"\n";
		}
	}
}