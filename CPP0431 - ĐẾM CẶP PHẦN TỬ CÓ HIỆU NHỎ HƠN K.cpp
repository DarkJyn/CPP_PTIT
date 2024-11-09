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
	int t;
	cin >> t;
	while(t--){
	    ll s = 0;
		int n,k;
		cin >> n >> k;
		vector <int> a(n);
		for(int i = 0;i < n;i++) cin >> a[i];
		sort(a.begin(),a.end());
		for(int i = 0;i < n - 1;i++){
			int x = lower_bound(a.begin() + i + 1,a.end(),a[i] + k) - a.begin();
			if(x == n) x--;
			if(a[x] > a[i] + k) x--;
			while(a[x] == a[i] + k) x--;
			if(x > i) s += x - i;
		}
		cout << s << "\n";
	}	
}