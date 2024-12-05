#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("TASK.inp","r",stdin);
	freopen("TASK.out","w",stdout);
	#endif
	ll t;
	cin >> t;
	while (t--){
		ll n;
		cin >> n;
		ll a[n];
		for(ll i = 0;i < n; ++i) cin >> a[i];
		ll cnt = 0;
		ll res = 0;
		while(cnt < n){
			int check = 0;
			for(ll i = 0;i < n;++i){
				if(a[i] == 0){
					cnt++;
					continue;
				}
				if(a[i] % 2 == 1){
					res++;
					a[i]--;
				}
				if(a[i] != 0){
					a[i] /= 2;
					check = 1;
				}
			}
			if(check) res++;
		}
		cout << res <<"\n";
	}
	
}