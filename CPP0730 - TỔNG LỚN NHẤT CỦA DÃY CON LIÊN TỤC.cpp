#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll a[n];
		for(ll i = 0;i < n; ++i){
			cin >> a[i];
		}
		ll sum0 = 0;
		ll res = -1e8;
		for(ll i = 0;i < n;++i){
			sum0 += a[i];
			res = max(res, sum0);
			if(sum0 < 0) sum0 = 0;
		}
		cout << res <<"\n";
	}	
}