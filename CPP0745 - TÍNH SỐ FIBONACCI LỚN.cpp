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
		int n;
		cin >> n;
		ll a = 1;
        ll b = 1;
        ll c = 1000000007;
		for(int i = 2;i < n; i++){
			ll k = (a + b) % c;
			b = a;
			a = k;
		}
		cout << a << endl;
	}   
}