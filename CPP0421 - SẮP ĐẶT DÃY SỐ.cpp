#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 998244353
#define endl "\n"

signed main(){
	// cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	ll t;
    cin >> t;
    while(t--){
        ll n;
		cin >> n;
		ll a[n];
		map<ll,ll> mp;
		for(ll i = 0;i < n;++i){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(ll i = 0;i < n;++i){
			if(mp[i]){
				cout << i <<" ";
			}
			else cout << "-1 ";
		}
		cout << endl;
    }
}