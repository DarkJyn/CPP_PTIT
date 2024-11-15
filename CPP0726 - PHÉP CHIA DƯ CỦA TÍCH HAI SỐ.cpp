#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

ll Mul(ll a, ll b,ll c){
	if(!b) return 0;
	ll x = Mul(a,b/2,c);
	if(b % 2 == 0)
		return 2 * x % c;
	return (2*x + a) % c;
}

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		ll a,b,c;
		cin >> a >> b >> c;
		cout << Mul(a,b,c) << "\n";
	}
}