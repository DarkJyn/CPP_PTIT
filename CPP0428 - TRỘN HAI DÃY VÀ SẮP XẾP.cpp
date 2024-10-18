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
	int t;
    cin >> t;
    while(t--){
        int n,m;
		cin >> n >> m;
		ll a[n + m];
		for(int i = 0; i < n + m;++i) cin >> a[i];
		sort(a,a + n + m);
		for(ll x : a) cout << x <<" ";
		cout << endl;
    }
}