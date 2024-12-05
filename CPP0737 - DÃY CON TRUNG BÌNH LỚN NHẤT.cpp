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
		ll n,k;
		cin >> n >> k;
		ll a[n + 3];
		ll prefix[n + 1];
		prefix[0] = 0;
		for(ll i = 1;i <= n;++i){
			cin >> a[i];
			prefix[i] = prefix[i-1] + a[i];
		}
		ll beg = 1;
		ll end = k;
		float res = -1e4;
		for(ll i = 1;i <= n - k + 1;++i){
			float tmp = (1.0 * (prefix[i + k - 1] - prefix[i-1]))/k;
			cerr << tmp <<"\n";
			if(res < tmp){
				res = tmp;
				beg = i;
				end = i + k - 1;
			}
		}
		for(ll i = beg;i <= end;++i){
			cout << a[i] <<" ";
		}
		cout <<"\n";
	}	
}