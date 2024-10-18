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
		vector<ll> v;
		ll cnt = 0;
		for(ll i = 0;i < n;++i){
			cin >> a[i];
			if(a[i] == 0){
				cnt++;
			}
			else{
				cout << a[i] <<" ";
			}
		}
		for(ll i = 0;i < cnt;++i){
			cout <<"0 ";
		}
		cout << endl;
    }
}