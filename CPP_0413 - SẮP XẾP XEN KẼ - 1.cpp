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
		int n;
		cin >> n;
		int a[n];
		int b[n];
		for(int i = 0;i < n;++i){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a,a + n);
		sort(b,b + n,greater<int>());
		for(int i = 0;i < n / 2;++i){
			cout << b[i] <<" " << a[i]<<" ";
		}
		if(n % 2 == 1) cout << a[n/2];
		cout << endl;
	}
}