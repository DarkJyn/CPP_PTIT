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
		ll n;
        ll a=1;
        ll b=1;
		cin >> n;
		if(n <= 3){
			cout << "YES"<<endl;
			continue;
		}
		while(a < n){
			ll k = a+b;
			b = a;
			a = k;
		}
		if(a == n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}