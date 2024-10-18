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
        int n,k;
		cin >> n >> k;
		ll a[n * k];
		for(ll i = 0;i < n * k;++i){
			cin >> a[i];
		}
		sort(a,a + n*k);
		for(int i : a){
			cout << i<<" ";
		}
		cout << endl;
    }
}