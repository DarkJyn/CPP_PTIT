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
        ll n,m;
		cin >> n >> m;
		ll a[n];
		ll b[m];
		
		for(ll i = 0;i < n;++i){
			cin >> a[i];
		}
		ll max1 = a[0];
		for(ll i = 0;i < n;++i){
			if(a[i] > max1){
				max1 = a[i];
			}
		}
		for(ll i = 0;i < m;++i){
			cin >> b[i];
		}
		ll min1 = b[0];
		for(ll i = 0;i < n;++i){
			if(min1 > b[i]){
				min1 = b[i];
			}
		}
		cout << max1 * min1 << endl; 
    }
}