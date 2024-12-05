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
		ll a[n + 1];
		for(ll i = 1;i <= n;++i) cin >> a[i];
		a[0] = 0;
		ll dp[n + 1];
		ll res = 0;
		for(ll i = 0;i <= n;++i){
			if(i < 3) dp[i] = a[i];
			else{
				dp[i] = max(dp[i - 2] + a[i],dp[i - 3] + a[i]);
			}
			res = max(res,dp[i]);
		}
		cout << res<<"\n";
		// 1 2 3 4
	}
}