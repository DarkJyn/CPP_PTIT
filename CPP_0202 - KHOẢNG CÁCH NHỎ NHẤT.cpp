#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	ll t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+2];
		for(int i = 0;i< n;++i) cin >> a[i];
		int res = INT_MAX;
		sort(a,a+n);
		for(int i = 1;i < n;++i){
			if(abs(a[i] - a[i-1]) < res) res = abs(a[i] - a[i-1]);
		}
		cout << res <<"\n";
	}
}