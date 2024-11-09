#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

ll tes(ll a,ll b){
	ll c = a * a + b * b;
	ll k = sqrt(c);
	if(k * k == c) return k;
	return 0;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll a[n];
		for(int i = 0;i < n;i++) cin >> a[i];
		sort(a,a+n);
        int ok = 0;
		for(int i = 0;i < n - 2;i++){
			for(int j = i+1;j < n-1;j++){
				ll k = tes(a[i],a[j]);
				if(k != 0 && binary_search(a + j + 1,a + n,k)){
					ok = 1;
					break;
				}
			}
			if(ok) break;
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}