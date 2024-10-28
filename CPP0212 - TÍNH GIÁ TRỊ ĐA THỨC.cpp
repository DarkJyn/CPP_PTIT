#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    // era();
    int t;
	cin >> t;
	while(t--){
		ll n,k,s=0;
		cin >> n >> k;
		ll a[n],h=1;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = n - 1; i >= 0; i--){
			s = (s + h * a[i]) % 1000000007;
			h = (h * k) % 1000000007;
		}
		cout << s << endl;
	}
}